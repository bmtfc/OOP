#ifndef CLASS567_CLASS_H
#define CLASS567_CLASS_H

#include <iostream>
#include <cmath>


class Vector3D {

private :

    double x,y,z;

    static int how_many;

public :


    Vector3D(){how_many++;};
    Vector3D(double x, double y, double z);
    ~Vector3D(){how_many--;};

    static int get_how_many(){return how_many;};

    double get_x();
    double get_y();
    double get_z();
    void set_x(double x);
    void set_y(double y);
    void set_z(double z);


    Vector3D operator+(Vector3D v2);
    Vector3D operator-(Vector3D v2);
    double operator*( Vector3D v2);
    Vector3D operator^(Vector3D v2);

    bool eqv(Vector3D v2);
    double l();

    friend Vector3D operator*(Vector3D v, double c);

    friend std::ostream& operator<< (std::ostream &out, const Vector3D &vector);
    friend std::istream& operator>> (std::istream &in, Vector3D &vector);

    friend bool operator> (Vector3D v1, Vector3D v2);
    friend bool operator< (Vector3D v1, Vector3D v2);
    friend bool operator==(Vector3D v1, Vector3D v2);


};

#endif
