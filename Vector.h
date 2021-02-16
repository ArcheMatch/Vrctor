//
// Created by pcb07 on 16.02.21.
//

#ifndef UNTITLED2_VECTOR_H
#define UNTITLED2_VECTOR_H



class Vector {
private:
    int n,ad;
    int* values;
    Vector(const Vector& other);
    ~Vector();
    int size() const;

public:
    Vector();
    Vector(const int& size, const int& initValue);
    Vector& operator=(const Vector& other);
    int& operator[](const int& index);
    int find(const int& value) const;
    void push_back(const int& value);
    void replace(const int& oldValue, const int& newValue);
};


#endif //UNTITLED2_VECTOR_H
