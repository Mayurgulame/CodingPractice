#include<iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 7, 9, 6, 5};  // Initial array
    int n = sizeof(arr) / sizeof(arr[0]);  // Current number of elements
    int pos = 4;  // Position of the element to update (0-based index)
    int newElement = 15;  // New value to update

    // Update the element at the given index
    arr[pos] = newElement;

    // Print the array after update
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
