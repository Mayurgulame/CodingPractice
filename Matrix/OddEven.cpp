#include<iostream>
using namespace std;

int main() {
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Loop to print odd and even numbers separately
    cout << "Even numbers: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] % 2 == 0) {  // Check if the number is even
                cout << mat[i][j] << " ";
            }
        }
    }
    
    cout << endl;  // Newline after even numbers

    cout << "Odd numbers: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (mat[i][j] % 2 != 0) {  // Check if the number is odd
                cout << mat[i][j] << " ";
            }
        }
    }
    
    cout << endl;  // Newline after odd numbers

    return 0;
}
