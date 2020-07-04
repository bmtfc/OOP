#ifndef VECTORS_H
#define VECTORS_H


#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

class Vector3D {

private :

    double x{}, y{}, z{};
public :

    Vector3D() = default;;

    Vector3D(Vector3D const &temp){
        this->x = temp.x;
        this->y = temp.y;
        this->z = temp.z;
    }

    Vector3D(double x, double y, double z) {
        this->x = x;
        this->y = y;
        this->z = z;
    };

    ~Vector3D() = default;;

    double get_x() {
        return x;
    };

    double get_y() {
        return y;
    };

    double get_z() {
        return z;
    };

    void set_x(double x) {
        this->x = x;
    };

    void set_y(double y) {
        this->y = y;
    };

    void set_z(double z) {
        this->z = z;
    };


    Vector3D& operator=(Vector3D v2){
        this->x = v2.x;
        this->y = v2.y;
        this->z = v2.z;
        return *this;
    }


    Vector3D operator+(Vector3D v2) {
        Vector3D temp;
        temp.set_x(this->x + v2.x);
        temp.set_y(this->y + v2.y);
        temp.set_z(this->z + v2.z);
        return temp;
    };

    Vector3D operator-(Vector3D v2) {
        Vector3D temp;
        temp.set_x(this->x - v2.x);
        temp.set_y(this->y - v2.y);
        temp.set_z(this->z - v2.z);
        return temp;
    };

    double operator*(Vector3D v2) {
        return this->x * v2.x + this->y * v2.y + this->z * v2.z;
    };

    Vector3D operator^(Vector3D v2) {
        Vector3D temp;
        temp.set_x(this->y * v2.z - v2.y * this->z);
        temp.set_y(-(this->x * v2.z - v2.x * this->z));
        temp.set_z(this->x * v2.y - v2.x * this->y);
        return temp;
    };

    bool eqv(Vector3D v2) {
        if (this->x != v2.x)
            return false;
        if (this->y != v2.y)
            return false;
        return this->z == v2.z;
    };

    double l() {
        return pow(this->x * this->x + this->y * this->y + this->z * this->z, 1.0 / 2);
    };

    friend Vector3D operator*(Vector3D v, double c) {
        Vector3D temp;
        temp.set_x(v.get_x() * c);
        temp.set_y(v.get_y() * c);
        temp.set_z(v.get_z() * c);
        return temp;
    };

    friend std::ostream &operator<<(std::ostream &out, const Vector3D &vector) {
        out << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
        return out;
    };

    friend std::istream &operator>>(std::istream &in, Vector3D &vector) {
        in >> vector.x;
        in >> vector.y;
        in >> vector.z;
        return in;
    };

    friend bool operator>(Vector3D v1, Vector3D v2) { return (v1.l() > v2.l()); };

    friend bool operator<(Vector3D v1, Vector3D v2) { return (v1.l() < v2.l()); };

    friend bool operator==(Vector3D v1, Vector3D v2) {
        return (v1.l() == v2.l());
    };


    friend string vector_to_str(const Vector3D &obj){
        ostringstream temp;
        temp << obj;
        string str = temp.str();
        return str;
    }


};




#endif // VECTORS_H
