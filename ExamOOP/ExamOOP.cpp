#include "Matrix.h"

int main() {
    // Create a 3x3 matrix using the constructor with dim parameters
    Matrix matrix1(3);

    matrix1.data_[0][0] = 1;
    matrix1.data_[0][1] = 2;
    matrix1.data_[0][2] = 3;
    matrix1.data_[1][0] = 4;
    matrix1.data_[1][1] = 5;
    matrix1.data_[1][2] = 6;
    matrix1.data_[2][0] = 7;
    matrix1.data_[2][1] = 8;
    matrix1.data_[2][2] = 9;

    //copy ctor
    Matrix matrix2(matrix1);

    // Perform matrix addition
    Matrix resultAdd = matrix1 + matrix2;
    std::cout << "Result of matrix addition:\n";
    resultAdd.print();

    // Perform matrix subtraction
    Matrix resultSub = matrix1 - matrix2;
    std::cout << "Result of matrix subtraction: \n";
    resultSub.print();

    // Perform scalar multiplication
    Matrix resultScalarMul = matrix1 * 5;
    std::cout << "Result of scalar multiplication: \n";
    resultScalarMul.print();

    Matrix resultMatMul = matrix1 * matrix2;
    std::cout << "Result of matrix multiplication: \n";
    resultMatMul.print();

    // result tested with https://matrix.reshish.com/multiplication.php

    return 0;
}
