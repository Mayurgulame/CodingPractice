public class MatrixTranspose {
    public static void main(String[] args) {
        int r = 4;
        int c = 4;

        int[][] mat = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };

        // Temporary array for the transposed matrix
        int[][] temp = new int[c][r];

        // Perform the transposition
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                temp[j][i] = mat[i][j];
            }
        }

        // Copy back to the original matrix
        for (int i = 0; i < c; i++) {
            for (int j = 0; j < r; j++) {
                mat[i][j] = temp[i][j];
            }
        }

        // Print the transposed matrix
        for (int i = 0; i < c; i++) {
            for (int j = 0; j < r; j++) {
                System.out.print(mat[i][j] + " ");
            }
            System.out.println(); // Add a newline after each row
        }
    }
}
