#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 4, 5, 8, 7};  // Array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate array size

    // Swap the elements to reverse the array
    for(int i = 0; i < n / 2; i++) {
        int temp = arr[i];           // Step 1: Store arr[i] in a temporary variable
        arr[i] = arr[n - i - 1];     // Step 2: Assign arr[n-i-1] to arr[i]
        arr[n - i - 1] = temp;       // Step 3: Assign temp (old arr[i]) to arr[n-i-1]
    }

    // Display the reversed array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
