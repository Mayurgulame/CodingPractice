#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
bool swapped = false;

for(int i=0;i<n-1;i++)
{
    swapped = false;
    
    for(int j=0;j<n-i-1;j++)
    {
     if(arr[j]>arr[j+1])
     {
        swap(arr[j],arr[j+1]);
        swapped = true;
     }
    }
    if (swapped == false)
    break;
}
}

int main(){
    int arr[]={4,6,8,2,1};
    bubbleSort(arr,5);
    for(int i=0;i<5;i++){
       cout<<arr[i]<<" ";
    }

}