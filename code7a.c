#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Access using index
    printf("First element: %d\n", arr[0]);  // Outputs: 10

    // Modify elements
    arr[2] = 100;  // Changes the third element
    printf("Updated third element: %d\n", arr[2]);  // Outputs: 100

    // Loop through elements
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
