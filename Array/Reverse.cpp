#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    

    for(int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }

}


int main()
{

    int arr[]={6,5,3,4,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    reverse(arr,n);

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

}