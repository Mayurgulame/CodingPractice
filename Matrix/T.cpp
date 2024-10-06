#include<iostream>
using namespace std;

int main() {

    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int temp[4][4]; // Temporary matrix to hold the transpose

    // Transpose the matrix
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            temp[j][i] = mat[i][j]; // Correctly assigning the transposed values
        }
    }

    // Display the transposed matrix
    cout << "Display of Transpose:" << endl;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            mat[i][j]=temp[j][i];
            cout << mat[i][j] << " "; // Print the transposed values from temp
        }
        cout << endl; // New line after each row
    }

    return 0;
}
