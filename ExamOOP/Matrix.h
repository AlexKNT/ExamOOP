#include <iostream>
#include <vector>

// Matrix class definition
class Matrix {
public:
    // Default ctor
    Matrix();

    // ctor with dimension param
    Matrix(int dimension);

    // Copy 
    Matrix(const Matrix& other);

    // Destructor (technically not needed, C++ creates one automatically)
    ~Matrix();

    //matrix addition
    Matrix operator+(const Matrix& other);

    // matrix subtraction
    Matrix operator-(const Matrix& other);

    // scalar mult
    Matrix operator*(int scalar);

    // matrix mult
    Matrix operator*(const Matrix& other);

    void print();

    // storage
    std::vector<std::vector<int>> data_;

private:
    int dimension_;
};
