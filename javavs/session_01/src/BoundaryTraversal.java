public class BoundaryTraversal {
    
    static void boundaryTraversal(int mat[][], int r, int c) {
        if (r == 1) { // If there is only one row
            for (int i = 0; i < c; i++)
                System.out.print(mat[0][i] + " "); // Print the only row
        } else if (c == 1) { // If there is only one column
            for (int j = 0; j < r; j++)
                System.out.print(mat[j][0] + " "); // Print the only column
        } else {
            // Print the first row
            for (int i = 0; i < c; i++) {
                System.out.print(mat[0][i] + " ");
            }

            // Print the last column
            for (int i = 1; i < r; i++) {
                System.out.print(mat[i][c - 1] + " ");
            }

            // Print the last row
            for (int i = c - 2; i >= 0; i--) {
                System.out.print(mat[r - 1][i] + " ");
            }

            // Print the first column
            for (int i = r - 2; i >= 1; i--) {
                System.out.print(mat[i][0] + " ");
            }
        }
    }

    public static void main(String[] args) {
        int[][] mat = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };

        int r = 4; // number of rows
        int c = 4; // number of columns
        System.out.println("Boundary Traversal of the matrix:");
        boundaryTraversal(mat, r, c);
    }
}
