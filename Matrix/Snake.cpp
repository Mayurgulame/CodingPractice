#include<iostream>
using namespace std;


int main(){
    int mat[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int r=4,c=4;
    int top=0,right=c-1,bottom=r-1,left=0;
    


    while(top<=bottom && left<=right)
    {
        for(int i=top;i<=bottom;i++)
         cout << mat[top][i] << " ";
         top++;
    
   
        for(int i=top;i<=bottom;i++)
         cout << mat[i][right] << " ";
         right--;

         if(top<=bottom)
         {
            for(int i=right;i>=left;i--)
            cout << mat[bottom][i] << " ";
            bottom--;
         }

         if(top<=bottom)
         {
            for(int i=bottom;i>=top;i--)
            cout << mat[i][left] << " ";
            left++;

         }

    }

return 0;
}