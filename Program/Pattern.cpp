#include <iostream>
using namespace std;

void swastika(int row, int col) {
    for (int i = 1; i <= row; i++) {  // Start i from 1
        for (int j = 1; j <= col; j++) {  // Start j from 1
            // Top-left region (i <= row/2)
            if (i <= row / 2) {
                if (j == 1)  // First column
                    cout << "*";
                else if (j == col / 2 + 1)  // Middle column
                    cout << " *";
                else if (i == 1 && j > col / 2 + 1)  // First row of top-right region
                    cout << " *";
                else
                    cout << "  ";  // Empty space
            }
            // Middle row
            else if (i == row / 2 + 1)
                cout << "* ";
            // Bottom-left and bottom-right regions
            else {
                if (j == col / 2 + 1 || j == col)  // Middle or last column
                    cout << "* ";
                else if (i == row && j <= col / 2 + 1)  // Last row, left half
                    cout << "* ";
                else
                    cout << "  ";  // Empty space
            }
        }
        cout << endl;
    }
}

int main() {
    int row = 7, col = 7;  // Set dimensions (rows and columns should be odd)
    swastika(row, col);
    return 0;
}
