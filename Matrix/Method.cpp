#include<iostream>
using namespace std;

// Function to print a matrix
void printMatrix(int mat[][3], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Initialize a 3x3 matrix
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Call the function to print the matrix
    printMatrix(mat, 3, 3);

    return 0;
}
