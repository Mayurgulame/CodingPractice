#include<iostream>
using namespace std;

int array[5][4]={

         {1,2,3,4},
         {5,6,7,8},
         {9,10,11,12},
         {13,14,15,16},
         {17,18,19,20},
};

int main(){
         for(int r=0;r<5;r++)
         {
            for(int j=0;j<4;j++)

            {
                if(array[r][j]%2 ==0)
                cout<<array[r][j]<< " ";
            }
            cout<<endl;
         }

}






