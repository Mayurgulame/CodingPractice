#include<iostream>
using namespace std;

// Function to multiply two matrices
void multiplyMatrices(int mat1[][3], int mat2[][3], int result[][3], int row3, int col1, int col2) {
    for(int i = 0; i < row3; i++) {           // Loop for rows of mat1
        for(int j = 0; j < col2; j++) {       // Loop for columns of mat2
            result[i][j] = 0;                 // Initialize the result matrix element
            for(int k = 0; k < col1; k++) {   // Loop for columns of mat1 and rows of mat2
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display the matrix
void displayMatrix(int rows, int cols, int matrix[][3]) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int mat1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {1, 2, 3}
    };
    
    int mat2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {1, 2, 3}
    };
    
    int result[3][3]; // Resulting matrix for the product
    
    // Multiply matrices
    multiplyMatrices(mat1, mat2, result, 3, 3, 3);
    
    // Display the result
    cout << "Product of the matrices is:" << endl;
    displayMatrix(3, 3, result);
    
    return 0;
}
