#include<iostream>
using namespace std;

void sort(int arr[],int n){
int low=0;int high=n-1;int mid=0;int temp;

while(mid<=high){
switch(arr[mid]){
    case 0:
    temp=arr[low];
    arr[low]=arr[mid];
    arr[mid]=temp;
    low++;
    mid++;
    break;

    case 1:
    mid++; 
    break;

    case 2:
    temp=arr[mid];
    arr[mid]=arr[high];
    arr[high]=temp;
    high--;
    break;

}
}
}

int main(){
    int arr[]={1,0,1,2,0,1,0,1,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    for(int x:arr){
        cout<<x<<" ";

}
}