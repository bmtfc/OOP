#ifndef INC_12LAB2PZ_CHYSLO_H
#define INC_12LAB2PZ_CHYSLO_H
#include "radix.h"
#include <string>

class Chyslo {
public:
    //radix = базис
    Chyslo(std::string num, int radix = 10);
    //----------------------------------------------------------------------
    Chyslo();
    //----------------------------------------------------------------------
    Chyslo &operator+(Chyslo &other) ;
    //----------------------------------------------------------------------
    Chyslo &operator-(Chyslo &other) ;
    //----------------------------------------------------------------------
    Chyslo &operator*(Chyslo &other) ;
    //----------------------------------------------------------------------
    Chyslo &operator=(Chyslo &other) ;
    //----------------------------------------------------------------------
    std::string getChyslo(radix r);
    //----------------------------------------------------------------------
    int getChyslo(){
        return (int)chyslo;
    }
    //----------------------------------------------------------------------
    void setChyslo(long long int chyslo);

private:
    long long chyslo;
};


#endif
