#include <iostream>
#include <iomanip>

using namespace std;

// Function to calculate the determinant of a 4x4 matrix
double determinant(double mat[4][4]) {
    double det = 0;
    for (int i = 0; i < 4; i++)
        det += (mat[0][i] * (mat[1][(i + 1) % 4] * (mat[2][(i + 2) % 4] * mat[3][(i + 3) % 4] - mat[2][(i + 3) % 4] * mat[3][(i + 2) % 4]) -
                             mat[1][(i + 2) % 4] * (mat[2][(i + 1) % 4] * mat[3][(i + 3) % 4] - mat[2][(i + 3) % 4] * mat[3][(i + 1) % 4]) +
                             mat[1][(i + 3) % 4] * (mat[2][(i + 1) % 4] * mat[3][(i + 2) % 4] - mat[2][(i + 2) % 4] * mat[3][(i + 1) % 4])));
    return det;
}

// Function to calculate the cofactor of a 4x4 matrix
void cofactor(double mat[4][4], double cofMat[4][4]) {
    double minorMat[4][4];

    // Minor matrices and calculating cofactors
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int idx1 = 0, idx2 = 0;
            for (int row = 0; row < 4; row++) {
                if (row != i) {
                    idx2 = 0;
                    for (int col = 0; col < 4; col++) {
                        if (col != j) {
                            minorMat[idx1][idx2] = mat[row][col];
                            idx2++;
                        }
                    }
                    idx1++;
                }
            }
            // Calculate cofactor (-1)^(i+j) * determinant of the 3x3 minor matrix
            cofMat[i][j] = (((i + j) % 2 == 0 ? 1 : -1) *
                            (minorMat[0][0] * (minorMat[1][1] * minorMat[2][2] - minorMat[1][2] * minorMat[2][1]) -
                             minorMat[0][1] * (minorMat[1][0] * minorMat[2][2] - minorMat[1][2] * minorMat[2][0]) +
                             minorMat[0][2] * (minorMat[1][0] * minorMat[2][1] - minorMat[1][1] * minorMat[2][0])));
        }
    }
}

// Function to transpose the matrix
void transpose(double mat[4][4], double transMat[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            transMat[j][i] = mat[i][j];
        }
    }
}

// Function to invert a 4x4 matrix
bool inverse(double mat[4][4], double invMat[4][4]) {
    double det = determinant(mat);
    if (det == 0) {
        cout << "Matrix is singular and cannot be inverted." << endl;
        return false;
    }

    double cofMat[4][4], adjMat[4][4];
    cofactor(mat, cofMat);    // Step 1: Cofactor matrix
    transpose(cofMat, adjMat); // Step 2: Adjugate matrix (transpose of cofactor)

    // Step 3: Multiply each element of adjugate matrix by 1/det
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            invMat[i][j] = adjMat[i][j] / det;
        }
    }

    return true;
}

int main() {
    // Input 4x4 matrix
    double mat[4][4] = {
        {5, 3, 7, 1},
        {2, 6, 4, 8},
        {9, 1, 5, 2},
        {3, 4, 8, 6}
    };

    double invMat[4][4];

    // Calculate inverse
    if (inverse(mat, invMat)) {
        cout << "Inverse matrix:" << endl;
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                cout << setw(10) << invMat[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
