#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template<class T>
class Number {

    T data;

public :

    Number()= default;;
    Number(T const &temp){
        this->data = temp;
    };


    Number operator+(Number other) {
        return this->data + other.data;
    }

    Number operator-(Number other) {
        return this->data - other.data;
    }

    Number operator*(Number other) {
        return (this->data) * other.data;
    }

    bool operator>(Number other) {
        return (this->data) > other.data;
    }

    bool operator<(Number other) {
        return (this->data) < other.data;
    }

    bool operator==(Number other) {
        return (this->data) == other.data;
    }


    friend std::ostream &operator<<(std::ostream &out, const Number &obj) {
        out << obj.data;
        return out;
    };

    friend string num_to_str(const Number &obj){
        ostringstream temp;
        temp << obj.data;
        string str = temp.str();
        return str;
    }
};


#endif // NUMBER_H
