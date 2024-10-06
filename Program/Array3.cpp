#include<iostream>
using namespace std;


void sort(int arr[], int n){
    int temp[n];
    int i=0;

    for(int j = 0; j < n; j++)
    {
    if(arr[j]==0)
    temp[i++] = arr[j];
    }

    for(int j=0;j<n; j++)
    {
    if(arr[j]==1)
    temp[i++] = arr[j];
    }

    for(int j=0;j<n; j++)
    {
    if(arr[j]==2)
    temp[i++] = arr[j];
    }

    for(int j=0;j<n; j++)
    {
    arr[j] = temp[j];
    }
}

int main(){
    int arr[] = {0,1,1,2,0,0,1,2,0,1,};
   int n = sizeof(arr) / sizeof(arr[0]);

   sort(arr,n);
    for(int x:arr)
    cout << x<<" ";
}