#include <iostream>
using namespace std;

int main() {
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    // Transpose the matrix directly into mat
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {  // Only swap above diagonal
            // Swap the elements
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }

    // Display the transposed matrix
    cout << "Display of Transpose:" << endl;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << mat[i][j] << " ";  // Print the transposed values from mat
        }
        cout << endl;  // New line after each row
    }

    return 0;
}
