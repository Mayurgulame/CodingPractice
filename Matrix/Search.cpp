#include <iostream>
using namespace std;

int main() {
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int x = 10;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(mat[i][j] == x) {
                cout << "Found at index: " << i << ", " << j << endl;
                return 0;  // Exit the program as soon as the element is found
            }
        }
    }

    cout << "Not Found" << endl;

    return 0;
}
