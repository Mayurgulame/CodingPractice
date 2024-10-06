#include<iostream>
using namespace std;

int main(){
    int arr[] = {2, 5, 8, 7, 8, 6, 5,4,2};  // Example array with a duplicate (5)
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate array size

    // Brute-force method to find duplicates
    cout << "Duplicate elements: ";
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;  // To avoid printing the same duplicate multiple times
            }
        }
    }

    return 0;
}
