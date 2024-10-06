#include<iostream>
using namespace std;

int main(){
    int mat[4][4]={
        {11,12,13,14},
        {10,9,8,7},
        {7,8,9,10},
        {11,16,17,18}
    };

   for(int i=0;i<4;i++)
   {
    for(int j=i+1;j<4;j++)
    {
        int temp=mat[i][j];
        mat[i][j]=mat[j][i];
        mat[j][i]=temp;
    }
   }


   for(int i=0;i<4;i++)
   {
    int low=0,high=4-1;

    while(low < high)
    {
        int temp=mat[low][i];
        mat[low][i]=mat[high][i];
        mat[high][i]=temp;
         low++;
         high--;
    }

   }

   for(int i=0;i<4;i++)
   {
    for(int j=0;j<4;j++)
    {
        cout << mat[i][j] << " ";
    }
    cout << endl;
   }


}