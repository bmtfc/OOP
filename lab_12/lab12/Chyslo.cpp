#include <algorithm>
#include "Chyslo.h"
#include "UnsupportedBaseException.h"
#include "NumberFormatException.h"
#include "OverflowException.h"
#include <exception>
#include "convert.h"
#include "OutOfRangeException.h"
#include "LetterFormatException.h"



//----------------------------------------------------------------------
Chyslo::Chyslo(std::string num, int radix) {
    chyslo = 0;
    if (num.empty()) {
        throw NumberFormatException();
    }
    switch (radix) {
        case 2:
        if(num[0]!='1' && num[0]!='0'){throw NumberFormatException();}
        //Додатнє
            if (num[0] == '0') {
                for (auto i = ++num.begin(); i < num.end(); i++) {
                    long long old = chyslo;
                    //Множем на два.
                    chyslo <<= 1;
                    if (*i == '1' || *i == '0') {
                        chyslo += *i - '0';
                    } else {
                        throw NumberFormatException();
                    }
                    if (chyslo < old) {
                        throw OutOfRangeException();
                    }
                }
            } else {
                long long power = 0;
                for (auto i = ++num.begin(); i < num.end(); i++) {
                    long long oldChyslo = chyslo;
                    long long oldPower = power;
                    chyslo <<= 1;
                    if (*i == '1' || *i == '0') {
                        chyslo += *i - '0';
                    } else {
                        throw NumberFormatException();
                    }
                    power <<= 1;
                    power += 1;
                    if (power < oldPower || oldChyslo > chyslo) {
                        throw OutOfRangeException();
                    }
                }
                power += 1;
                chyslo = -power + chyslo;
            }
            break;
        case 10:
            if (num[0] == '-') {
                for (auto i = ++num.begin(); i < num.end(); i++) {
                    if ('0' <= *i && *i <= '9') {
                        long long old = chyslo;
                        chyslo *= 10;
                        chyslo -= *i - '0';
                        if (old < chyslo) {
                            throw OutOfRangeException();
                        }
                    } else {
                        throw LetterFormatException();
                    }
                }
            } else {
                for (auto i:num) {
                    if ('0' <= i && i <= '9') {
                        long long old = chyslo;
                        chyslo *= 10;
                        chyslo += i - '0';
                        if (old > chyslo) {
                            throw OutOfRangeException();
                        }
                    } else {
                        throw LetterFormatException();
                    }
                }
            }
            break;
        case 16:
            std::transform(num.begin(), num.end(), num.begin(), [](unsigned char c) { return std::tolower(c); });
            if (!((num[0] >= 'a' && num[0] <= 'f') || (num[0] >= '0' && num[0] <= '9'))) {
                throw NumberFormatException();
            }
            if (num[0] <= '7') {//додатні
                chyslo += num[0] - '0';
                for (auto i = ++num.begin(); i < num.end(); i++) {
                    if (!((*i >= 'a' && *i <= 'f') || (*i >= '0' && *i <= '9'))) {
                        throw NumberFormatException();
                    } else {
                        long long old = chyslo;
                        chyslo <<= 4;
                        if (*i <= '9') {
                            chyslo += *i - '0';
                        } else {
                            chyslo += *i - 'a' + 10;
                        }
                        if (old > chyslo) {
                            throw OutOfRangeException();
                        }
                    }
                }
            } else {
                long long power = 15;
                if (num[0] <= '9') {
                    chyslo += num[0] - '0';
                } else {
                    chyslo += num[0] - 'a' + 10;
                }
                for (auto i = ++num.begin(); i < num.end(); i++) {
                    if (!((*i >= 'a' && *i <= 'f') || (*i >= '0' && *i <= '9'))) {
                        throw NumberFormatException();
                    } else {
                        long long oldChyslo = chyslo;
                        long long oldPower = power;
                        chyslo <<= 4;
                        if (*i <= '9') {
                            chyslo += *i - '0';
                        } else {
                            chyslo += *i - 'a' + 10;
                        }                     
                        power <<= 4;
                        power += 15;
                        if (power < oldPower || oldChyslo > chyslo) {
                            throw OutOfRangeException();

                        }
                    }
                }
                //1000
                power += 1;
                chyslo = -power + chyslo;
            }
            break;
        default:
            throw UnsupportedBaseException();
    }

}
//----------------------------------------------------------------------
std::string Chyslo::getChyslo(radix r) {
    char buffer [64]={0};
 if(r>=binary){
 return std::string(lltoa(chyslo,buffer,r));
 }
 else throw UnsupportedBaseException();
}
//----------------------------------------------------------------------
void Chyslo::setChyslo(long long int chyslo) {
    Chyslo::chyslo = chyslo;
}
//----------------------------------------------------------------------
Chyslo& Chyslo::operator+(Chyslo &other)  {
    auto *result = new Chyslo();
    result->chyslo = chyslo + other.chyslo;
    if (chyslo >= 0 && other.chyslo >= 0 && (result->chyslo < chyslo || result->chyslo < other.chyslo)) {
        throw OverflowException();
    }
    if (chyslo <= 0 && other.chyslo <= 0 && (result->chyslo > chyslo || result->chyslo > other.chyslo)) {
        throw OverflowException();
    }
    return *result;
}
//----------------------------------------------------------------------
Chyslo& Chyslo::operator-(Chyslo &other)  {
    auto *result = new Chyslo();
    result->chyslo = chyslo - other.chyslo;
    if (chyslo <= 0 && other.chyslo >= 0 && (result->chyslo > chyslo || result->chyslo > other.chyslo)) {
        throw OverflowException();
    }
    if (chyslo >= 0 && other.chyslo <= 0 && (result->chyslo < chyslo || result->chyslo < other.chyslo)) {
        throw OverflowException();
    }
    return *result;
}
//----------------------------------------------------------------------
Chyslo& Chyslo::operator*(Chyslo &other)  {
    auto *result = new Chyslo();
    result->chyslo = chyslo * other.chyslo;
    if (chyslo >= 0 && other.chyslo >= 0 && (result->chyslo < std::max(chyslo, other.chyslo))) {
        throw OverflowException();
    }
    //різні знаки
    if (((chyslo >= 0 && other.chyslo <= 0) || (chyslo <= 0 && other.chyslo >= 0)) &&
        (result->chyslo > std::min(chyslo, other.chyslo))) {
        throw OverflowException();
    }
    if (chyslo <= 0 && other.chyslo <= 0 && (result->chyslo < -std::min(chyslo, other.chyslo))) {
        throw OverflowException();
    }
    return *result;
}
//----------------------------------------------------------------------
Chyslo &Chyslo::operator=(Chyslo &other) {
    this->chyslo=other.chyslo;
    return *this;
}
//----------------------------------------------------------------------
Chyslo::Chyslo() {
    chyslo = 0;
}



