#include <iostream>
using namespace std;

// Function to add two matrices
void addMatrices(int rows, int cols, int mat1[][10], int mat2[][10], int result[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int rows, int cols, int mat1[][10], int mat2[][10], int result[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
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
    int rows, cols;
    
    // Input dimensions of the matrices
    cout << "Enter the number of rows and columns of matrices: ";
    cin >> rows >> cols;
    
    int mat1[10][10], mat2[10][10], sum[10][10], diff[10][10];
    
    // Input first matrix
    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat1[i][j];
        }
    }
    
    // Input second matrix
    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat2[i][j];
        }
    }
    
    // Add the matrices
    addMatrices(rows, cols, mat1, mat2, sum);
    
    // Subtract the matrices
    subtractMatrices(rows, cols, mat1, mat2, diff);
    
    // Display the sum
    cout << "Sum of the matrices:" << endl;
    displayMatrix(rows, cols, sum);
    
    // Display the difference
    cout << "Difference of the matrices:" << endl;
    displayMatrix(rows, cols, diff);
    
    return 0;
}
