#include <iostream>
#include <algorithm>
using namespace std;

void snakePattern(int mat[][3], int r, int c) // Specify the second dimension size
{
    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0) // For even rows
        {
            for (int j = 0; j < c; j++)
                cout << mat[i][j] << " "; // Print from left to right
        }
        else // For odd rows
        {
            for (int j = c - 1; j >= 0; j--)
            {
                cout << mat[i][j] << " "; // Print from right to left
            }
        }
        cout << endl; // Print a new line after each row
    }
}

int main()
{
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    snakePattern(mat, 4, 4); // Pass matrix dimensions

    return 0;
}
