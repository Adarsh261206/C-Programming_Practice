#include <stdio.h>
int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Print all elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}
