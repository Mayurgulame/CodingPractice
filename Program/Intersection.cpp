#include <iostream>
#include <algorithm> // For std::sort
using namespace std;

void intersection(int a[], int b[], int m, int n) {
    int i = 0, j = 0;
    while (i < m && j < n) {
        // Skip duplicates in array a
        if (i > 0 && a[i - 1] == a[i]) {
            i++;
            continue;
        }
        // Skip duplicates in array b
        if (j > 0 && b[j - 1] == b[j]) {
            j++;
            continue;
        }
        if (a[i] < b[j]) {
            i++;
        } else if (a[i] > b[j]) {
            j++;
        } else {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

int main() {
    int a[] = {3, 4, 5, 5, 6, 7, 8, 9, 10, 10, 10, 15, 15, 20};
    int b[] = {5, 10, 4, 7, 8, 9, 10, 15, 30};
    
    // Sort both arrays
    sort(a, a + sizeof(a) / sizeof(a[0]));
    sort(b, b + sizeof(b) / sizeof(b[0]));

    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    intersection(a, b, m, n);
    return 0;
}
