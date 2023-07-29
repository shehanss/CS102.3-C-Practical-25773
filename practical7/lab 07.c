#include <stdio.h>

// Function to add two matrices and store the result in the third matrix
void addMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to display the elements of a 3x3 matrix
void displayMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[3][3] = {
        {3, 2, 4},
        {2, 6, 3},
        {5, 8, 7}
    };

    int matrix2[3][3] = {
        {1, 4, 6},
        {4, 3, 2},
        {5, 7, 8}
    };

    int resultMatrix[3][3];

    // Call the addMatrices function to compute the sum of matrix1 and matrix2
    addMatrices(matrix1, matrix2, resultMatrix);

    printf("Matrix 1:\n");
    displayMatrix(matrix1);

    printf("Matrix 2:\n");
    displayMatrix(matrix2);

    printf("Sum of the matrices:\n");
    displayMatrix(resultMatrix);

    return 0;
}
