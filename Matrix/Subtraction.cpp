#include<iostream>
using namespace std;


int main(){


    int mat1[3][3]={
        {1,2,3},
        {4,6,9},
        {12,12,10}
    };

    int mat2[3][3]={
        {9,8,6},
        {4,5,6},
        {7,8,9}
    };


    int res[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
              res[i][j]=mat1[i][j] - mat2[i][j];

        }
      
    }

    cout<< "Result Of Matrix Subtraction" << endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
             cout << res[i][j] << " ";

        }
        cout << endl;
       
    }
    return 0;


}