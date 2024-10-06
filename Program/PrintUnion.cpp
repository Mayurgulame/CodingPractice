#include<iostream>
using namespace std;

int main() {
    int arr1[5] = {2, 4, 6, 8, 10};  // i
    int arr2[5] = {2, 3, 5, 7, 9};   // j
    int arr3[10] = {};               // k

    int i = 0, j = 0, k = 0;

    // Merge both arrays until one is fully traversed
    while (i < 5 && j < 5) {
        if (arr1[i] <= arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    // Copy remaining elements from arr1 (if any)
    while (i < 5) {
        arr3[k++] = arr1[i++];
    }

    // Copy remaining elements from arr2 (if any)
    while (j < 5) {
        arr3[k++] = arr2[j++];
    }

    // Print merged array
    for (int i = 0; i < 10; i++) {
        cout << " " << arr3[i];
    }

    return 0;
}
