#include <stdio.h>

int main() {
    int i;

    // Using a while loop
    printf("Using while loop:\n");
    i = 4; // Initialize i
    while (i <= 5) {
        printf("%d\n", i);
        i++; // Increment i
    }

    // Using a do-while loop
    printf("\nUsing do-while loop:\n");
    i = 4; // Initialize i
    do {
        printf("%d\n", i);
        i++; // Increment i
    } while (i <= 5);

    // Using a for loop
    printf("\nUsing for loop:\n");
    for (i = 4; i <= 5; i++) {
        printf("%d\n", i);
    }

    return 0;
}