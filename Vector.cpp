
#include "Vector.h"
#include <iostream>


// default consructor
Vector::Vector() : ad(10), n(0) {
    values = new int[n+ad];
}

//constuctor with parameters
Vector::Vector(const int &size, const int &initValue) : n(size), ad(10){
  values = new int[n+ad];
    for (int i=0;i<size;i++){
        values[i]=initValue;
    }
}

//destructor
Vector::~Vector() {
    delete []values;
}


//constuctor of copy
Vector::Vector(const Vector &other) : n(other.n) ,ad(1o) {
    if (other.values != nullptr){
        values = new int[n];
        for (int i=0; i<n;i++){
            values[i] = other.values[i];
        }
    }
}

//operator of asigment of copy;
Vector& Vector::operator=(const Vector &other) {
    if (this == &other) {
        return *this;
    }

    if (other.values != nullptr) {
        delete [] values;
        n=other.n;
        values = new int[n];
        for(int i=0;i<n;i++){
            values[i]=other.values[i];
        }
    }
    return  *this;
}

//
 int& Vector::operator[](const int& index) {
    if ( values!= nullptr) {
        return  values[index];
}
