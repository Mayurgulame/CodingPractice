#include<iostream>
using namespace std;

void selctSort(int arr[],int n,int i)
{
    int mid_index=i;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[mid_index])
            mid_index=i;
        }
        swap(arr[mid_index],arr[i]);
    }
}
