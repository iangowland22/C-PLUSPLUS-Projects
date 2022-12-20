#include <iostream>
#include "Matrix.h"

using namespace std;

int main(){

    Matrix matrix1;
    cout<<"First matrix: "<<endl;
    matrix1.printArray();

    Matrix matrix2;
    cout<<"Second matrix: "<<endl;
    matrix2.printArray();

    Matrix result;
    result = matrix1 * matrix2;
    cout<<"First matrix multiplied by second matrix: "<<endl;
    result.printArray();

    bool isEqual = matrix1 == matrix2;

    cout<<"Is the first Matrix equal to the second Matrix? "<<endl;
    cout<<"0 is false, 1 is true: "<<endl;
    cout<<"Result: "<<isEqual<<"\n"<<endl;

    Matrix test1(1);
    cout<<"First test matrix: "<<endl;
    test1.printArray();

    Matrix test2(1);
    cout<<"Second test matrix: "<<endl;
    test2.printArray();

    result = test1 * test2;
    cout<<"First matrix multiplied by second matrix: "<<endl;
    result.printArray();

    cout<<"Is the first Matrix equal to the second Matrix? "<<endl;
    cout<<"0 is false, 1 is true: "<<endl;
    bool isEqualTest = test1 == test2;

    cout<<"Result: "<<isEqualTest<<"\n"<<endl;

    return 0;
}