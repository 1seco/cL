int main() {
    int matrix[2][3] = { {1, 2, 3}, {4, 5, 6,} };

    printf("%d", matrix[0][2]);
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

    int i, j;
    for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
        printf("%d\n", matrix[i][j]);
    }
    } 
    return 0;
}