#include <iostream>
#include "Matrix.h"

using namespace std;

/*

 Creates a Matrix object and assigns random values 
 between 1 and 9 to the two-dimensional array with 
 3 rows and 3 columns of the matrix object.

*/
Matrix::Matrix(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arr[i][j] = (rand() % 9)+1;
        }
    }
}

/*

I've included this constructor and utilized it in the main function
for testing purposes. Instead of assigning random values to the matrix
an integer is passed into this constructor so that all elements in the
matrix are the same. This is done to show that the == operator overloading 
is, in fact, functional.

*/
Matrix::Matrix(int testValue){
     for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arr[i][j] = testValue;
        }
    }
}


// Prints values stored in the 2d array of the Matrix object
void Matrix::printArray(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout<<arr[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
}


/*

 Multiplication of matrices will iterate through each row of the calling
 matrix, the three elements within the calling matrix, and the columns of 
 the argument matrix. 

 Each of the three elements in the row of the calling matrix will be multiplied 
 by the corresponding column of the argument matrix. So row 0, element 0 of 
 the calling matrix will be multiplied by row 0, element 0 of the argument matrix.
 Then, row 0 element 1 will be multiplied by row 1 element 0 of the argument matrix.
 Then, row 0 element 2 will be multiplied by row 2 element 0 of the argument matrix.
 These values are added to each other and then assigned to row 0, element 0 of the
 resulting matrix.

 The process is repeated for each column of the argument matrix and the result is 
 stored in the row of the calling matrix and the element of the argument matrix 
 column.


*/
Matrix Matrix::operator * (const Matrix argMatrix) const{
    
    Matrix result;

    // looping through the 3 rows of the calling Matrix
    for(int i = 0; i < 3; i++){

        //looping through each of the 3 elements in each row in the calling Matrix
        for(int j = 0; j < 3; j++){
            int total = 0;
    
            //looping through each of the 3 elements in the columns of argument Matrix
            for(int k = 0; k < 3; k++){
                total += arr[i][k] * argMatrix.arr[k][j];
            }
            result.arr[i][j] = total;
         }
    }
    return result;
}

// Checking if all the elements of the two Matrices are equal 
bool Matrix::operator == (const Matrix argMatrix) const{

    bool equal = true;

    for(int i = 0; i < 3 && equal; i++){
        for(int j = 0; j < 3 && equal; j++){
            if(arr[i][j] != argMatrix.arr[i][j]){
                return false;
            }
        }
    }
   return true;
}
