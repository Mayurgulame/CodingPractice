#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5, 6, 7, 8, 8, 9 ,2 ,1};  // Array
    int n = sizeof(arr) / sizeof(arr[0]);  // Correct way to calculate the size of the array

    int minimumElement = arr[0];  // Initialize with the first element

    for(int i = 1; i < n; i++) {  // Start from index 1
        if(arr[i] < minimumElement) {
            minimumElement = arr[i];  // Update minimum element
        }
    }

    cout << "Minimum Element: " << minimumElement << endl;  // Print the minimum element after the loop

    return 0;
}
