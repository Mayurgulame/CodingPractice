#include <iostream>
using namespace std;

void swapArrays(int arr1[], int size1, int arr2[], int size2) {
    // Handle the case where one or both arrays are empty
    if (size1 == 0 || size2 == 0) {
        cout << "One or both arrays are empty. No swapping can be performed." << endl;
        return;
    }

    // Determine the smaller size to avoid out-of-bounds access
    int minSize = min(size1, size2);

    // Swap the elements of the arrays up to the minimum size
    for (int i = 0; i < minSize; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }

    // Print the arrays after swapping
    cout << "Array 1 after swapping: ";
    for (int i = 0; i < size1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "Array 2 after swapping: ";
    for (int i = 0; i < size2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8};

    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    cout << "Before swapping:" << endl;
    cout << "Array 1: ";
    for (int i = 0; i < size1; i++) {
        cout << array1[i] << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for (int i = 0; i < size2; i++) {
        cout << array2[i] << " ";
    }
    cout << endl;

    // Call the function to swap arrays
    swapArrays(array1, size1, array2, size2);

    return 0;
}
