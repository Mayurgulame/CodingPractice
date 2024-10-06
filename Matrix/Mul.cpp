#include <iostream>
using namespace std;

// Function to multiply two matrices
void multiplyMatrices(int mat1[][10], int mat2[][10], int result[][10], int row1, int col1, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0; // Initialize result matrix element
            for (int k = 0; k < col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row1, col1, row2, col2;
    
    // Input dimensions of the first matrix
    cout << "Enter the number of rows and columns of first matrix: ";
    cin >> row1 >> col1;
    
    // Input dimensions of the second matrix
    cout << "Enter the number of rows and columns of second matrix: ";
    cin >> row2 >> col2;
    
    // Ensure that the number of columns in the first matrix equals the number of rows in the second matrix
    if (col1 != row2) {
        cout << "Matrix multiplication not possible! The number of columns of the first matrix must be equal to the number of rows of the second matrix." << endl;
        return 0;
    }
    
    int mat1[10][10], mat2[10][10], result[10][10];
    
    // Input first matrix
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> mat1[i][j];
        }
    }
    
    // Input second matrix
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> mat2[i][j];
        }
    }
    
    // Multiply the matrices
    multiplyMatrices(mat1, mat2, result, row1, col1, col2);
    
    // Display the result
    cout << "Product of the matrices:" << endl;
    displayMatrix(row1, col2, result);
    
    return 0;
}
