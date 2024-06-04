#include "Matrix.h"

// Default ctor
Matrix::Matrix() : dimension_(0), data_(0, std::vector<int>(0)) {}

// Constructor with dimension params
Matrix::Matrix(int dimension) : dimension_(dimension), data_(dimension, std::vector<int>(dimension, 0)) {}

// Copy constructor
Matrix::Matrix(const Matrix& other) : dimension_(other.dimension_), data_(other.data_) {}

// Default Destructor
Matrix::~Matrix() {}

// matrix addition
Matrix Matrix::operator+(const Matrix& other) {
    Matrix result(dimension_);
    for (int i = 0; i < dimension_; ++i) {
        for (int j = 0; j < dimension_; ++j) {
            // this == matrix1
            result.data_[i][j] = this->data_[i][j] + other.data_[i][j];
        }
    }
    return result;
}

// matrix subtraction
Matrix Matrix::operator-(const Matrix& other) {
    Matrix result(dimension_);
    for (int i = 0; i < dimension_; ++i) {
        for (int j = 0; j < dimension_; ++j) {
            // this == matrix1
            result.data_[i][j] = this->data_[i][j] - other.data_[i][j];
        }
    }
    return result;
}

//scalar mult
Matrix Matrix::operator*(int scalar) {
    Matrix result(dimension_);
    for (int i = 0; i < dimension_; ++i) {
        for (int j = 0; j < dimension_; ++j) {
            // this == matrix1
            result.data_[i][j] = this->data_[i][j] * scalar;
        }
    }
    return result;
}

// matrix multi
Matrix Matrix::operator*(const Matrix& other) {
    Matrix result(dimension_);
    for (int i = 0; i < dimension_; ++i) {
        for (int j = 0; j < dimension_; ++j) {
            result.data_[i][j] = 0;
            for (int k = 0; k < dimension_; ++k) {
                result.data_[i][j] += this->data_[i][k] * other.data_[k][j];
            }
        }
    }
    return result;
}

void Matrix::print() {
    for (int i = 0; i < dimension_; ++i) {
        for (int j = 0; j < dimension_; ++j) {
            std::cout << data_[i][j] << " ";
        }
        std::cout << "\n";
    }
}
