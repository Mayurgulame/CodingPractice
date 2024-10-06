#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 5, 8, 7, 9, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate array size

    int maxElement = arr[0];  // Initialize maxElement with the first element

    // Loop through the array to find the maximum element
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxElement) {
            maxElement = arr[i];  // Update maxElement if arr[i] is greater
        }
    }

    // Print the maximum element
    cout << "Maximum element in the array is: " << maxElement << endl;

    return 0;
}
