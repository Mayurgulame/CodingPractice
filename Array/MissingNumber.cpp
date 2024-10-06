#include<iostream>
using namespace std;


int main(){
    int arr[]={0,1,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    int n=size;
    int totalSum=n*(n+1)/2;

    int arrSum=0;
    for(int i=0;i<size;i++)
    {
        arrSum+=arr[i];
    }

    int missingNumber=totalSum-arrSum;

    cout << "Missing Number: " <<missingNumber <<endl;
}