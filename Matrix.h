#include <iostream>
#ifndef MATRIX_H
#define MATRIX_H

class Matrix{
    public:
        int arr[3][3];
        Matrix();
        Matrix(int testValue);
        void printArray();
    
    Matrix operator * (const Matrix argMatrix) const;
    bool operator == (const Matrix argMatrix) const;

};
#endif