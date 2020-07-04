#include "vectors.h"


Vector3D::Vector3D(double x, double y, double z){
    this->x =x;
    this->y =y;
    this->z =z;
}

double Vector3D::get_x(){
    return x;
}

double Vector3D::get_y(){
    return y;
}

double Vector3D::get_z(){
    return z;
}

void Vector3D::set_x(double x){
    this->x = x;
}

void Vector3D::set_y(double y){
    this->y = y;
}

void Vector3D::set_z(double z){
    this->z = z;
}

Vector3D Vector3D::operator+( Vector3D v2){
    Vector3D temp;
    temp.set_x(this->x+v2.x);
    temp.set_y(this->y+v2.y);
    temp.set_z(this->z+v2.z);
    return temp;
}


Vector3D Vector3D::operator-( Vector3D v2){
    Vector3D temp;
    temp.set_x(this->x - v2.x);
    temp.set_y(this->y - v2.y);
    temp.set_z(this->z - v2.z);
    return temp;
}

double Vector3D::operator*(Vector3D v2){

    return this->x*v2.x + this->y*v2.y + this->z*v2.z;
}

Vector3D  operator*( Vector3D v, double c){
    Vector3D temp;
    temp.set_x(v.get_x()*c);
    temp.set_y(v.get_y()*c);
    temp.set_z(v.get_z()*c);
    return temp;
}

Vector3D Vector3D::operator^(Vector3D v2){
    Vector3D temp;
    temp.set_x(this->y*v2.z-v2.y*this->z);
    temp.set_y(-(this->x*v2.z-v2.x*this->z));
    temp.set_z(this->x*v2.y-v2.x*this->y);
    return temp;
}

bool Vector3D::eqv(Vector3D v2){
    if(this->x != v2.x)
        return false;
    if(this->y != v2.y)
        return false;
    return this->z == v2.z;
}

double Vector3D::l(){
    return pow(this->x*this->x + this->y*this->y + this->z*this->z,1.0/2) ;
}

bool operator==( Vector3D v1, Vector3D v2){
    return (v1.l() == v2.l());
}

std::ostream& operator<< (std::ostream &out, const Vector3D &vector)
{
    out << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
    return out;
}
std::istream& operator>> (std::istream &in, Vector3D &vector)
{
    in >> vector.x;
    in >> vector.y;
    in >> vector.z;
    return in;
}

bool operator> (Vector3D v1, Vector3D v2)
{
    return ( v1.l() > v2.l()) ;
}

bool operator< (Vector3D v1, Vector3D v2)
{
    return ( v1.l() < v2.l()) ;
}
