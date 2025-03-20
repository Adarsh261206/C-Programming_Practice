#include <stdio.h>

int main() {
    int number;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &number);

    // If statement to check if the number is positive
    if (number > 0) {
        printf("The number is positive.\n");
    }
    // If-else statement to check if the number is negative or zero
    else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Multiway decision using switch to categorize the number
    switch (number) {
        case 0:
            printf("Zero is neither positive nor negative.\n");
            break;
        case 1:
        case 2:
        case 3:
            printf("The number is small.\n");
            break;
        case 4:
        case 5:
        case 6:
            printf("The number is medium.\n");
            break;
        default:
            if (number > 6) {
                printf("The number is large.\n");
            } else {
                printf("The number is very negative.\n");
            }
            break;
    }

    return 0;
}