#include <iostream>
using namespace std;

int main() {
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int temp[4][4];

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            temp[i][j]=mat[j][i];
            
        }
    }

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            mat[i][j]=temp[i][j];
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}