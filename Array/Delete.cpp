#include<iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 7, 9, 6, 5,4,5,6};  // Initial array with 7 elements
    int n = sizeof(arr) / sizeof(arr[0]);  // Current number of elements
    int pos = 5;  // Position of the element to delete (0-based index)

    // Shift elements to the left to fill the gap
    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;  // Decrease the number of elements

    // Print the array after deletion
    for(int i = 0; i < n; i++) {

        cout << arr[i] << " ";
    }

    return 0;
}
