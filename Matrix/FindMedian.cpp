#include<iostream>
#include<algorithm>
using namespace std;

const int MAX = 100;

// Function to find the median without modifying the matrix
int findMedian(int mat[][MAX], int r ,int c)
{
    int min = mat[0][0], max = mat[0][0];

    // Find the minimum and maximum elements in the matrix
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (mat[i][j] < min)
                min = mat[i][j];
            if (mat[i][j] > max)
                max = mat[i][j];
        }
    }

    // The median position (1-based index)
    int medianPos = (r * c + 1) / 2;

    // Perform binary search on the range [min, max]
    while (min < max) {
        int mid = min + (max - min) / 2;
        int count = 0;

        // Count how many numbers in the matrix are <= mid
        for (int i = 0; i < r; ++i) {
            count += upper_bound(mat[i], mat[i] + c, mid) - mat[i];
        }

        // If the count is less than the median position, the median is in the right half
        if (count < medianPos)
            min = mid + 1;
        else
            max = mid;
    }

    // The min (or max, since they will converge) will be the median
    return min;
}

int main() {
    int r = 3, c = 5;
    int mat[][MAX] = {
        {20, 5, 40, 10, 30},
        {3,  1,  4,  6,  2},
        {13, 11, 19, 15, 17}
    };

    cout << "Median is " << findMedian(mat, r, c) << endl;
    return 0;
}
