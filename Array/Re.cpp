#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 5, 8, 7, 9, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);  // Correct way to calculate array size

    // Loop to reverse the array
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];                // Swap element at position i with n-i-1
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Print the reversed array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
