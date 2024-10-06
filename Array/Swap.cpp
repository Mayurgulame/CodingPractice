#include <iostream>
using namespace std;

int main() {
    int arr[] = {8, 2, 5, 11, 9 , 6 , 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Swapping elements at index 1 and index 3 (2nd and 4th elements)
    int temp = arr[0];   // Step 1: Store arr[1] in a temporary variable
    arr[0] = arr[3];     // Step 2: Put the value of arr[3] in arr[1]
    arr[3] = temp;       // Step 3: Put the value stored in temp into arr[3]

    // Display the array after swap
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
