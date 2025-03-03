#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2];
public:
    // Constructor to initialize matrix elements
    Matrix(int a11, int a12, int a21, int a22) {
        mat[0][0] = a11;
        mat[0][1] = a12;
        mat[1][0] = a21;
        mat[1][1] = a22;
    }

    // Overload + operator to perform matrix addition
    Matrix operator+(const Matrix& other) {
        return Matrix(
            mat[0][0] + other.mat[0][0], mat[0][1] + other.mat[0][1],
            mat[1][0] + other.mat[1][0], mat[1][1] + other.mat[1][1]
        );
    }

    // Overload * operator to perform matrix multiplication
    Matrix operator*(const Matrix& other) {
        return Matrix(
            mat[0][0] * other.mat[0][0] + mat[0][1] * other.mat[1][0], mat[0][0] * other.mat[0][1] + mat[0][1] * other.mat[1][1],
            mat[1][0] * other.mat[0][0] + mat[1][1] * other.mat[1][0], mat[1][0] * other.mat[0][1] + mat[1][1] * other.mat[1][1]
        );
    }

    // Function to display the matrix
    void display() const {
        cout << mat[0][0] << " " << mat[0][1] << endl;
        cout << mat[1][0] << " " << mat[1][1] << endl;
    }
};

int main() {
    Matrix mat1(1, 2, 3, 4);
    Matrix mat2(5, 6, 7, 8);

    cout << "Matrix 1:" << endl;
    mat1.display();

    cout << "Matrix 2:" << endl;
    mat2.display();

    Matrix sum = mat1 + mat2;
    cout << "Sum of Matrix 1 and Matrix 2:" << endl;
    sum.display();

    Matrix product = mat1 * mat2;
    cout << "Product of Matrix 1 and Matrix 2:" << endl;
    product.display();

    return 0;
}