#include<iostream>
using namespace std;


void sort(int arr[],int n) {
    int i=-1;
    int j=n;

    while(true) {
        do
        {
         i++;    
        }
        while(arr[i]==0);
        do
        {
            j--;
        } while (arr[j]==1);
        
        if(i>=j)
        return;
        swap(arr[i],arr[j]);
    }
        
}


int main(){
    int arr[]= {0,1,1,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);

    for(int x:arr)
    cout << x <<" ";
}