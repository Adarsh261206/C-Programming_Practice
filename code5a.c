#include <stdio.h>

// Function to calculate factorial iteratively
long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to calculate Fibonacci number iteratively
long long fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    long long a = 0, b = 1, next;
    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int choice, n;

    printf("Choose an option:\n");
    printf("1. Calculate Factorial\n");
    printf("2. Calculate Fibonacci\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Factorial Calculation
            printf("Enter a number to calculate its factorial: ");
            scanf("%d", &n);

            if (n < 0) {
                printf("Factorial is not defined for negative numbers.\n");
            } else {
                printf("Factorial of %d is: %lld\n", n, factorial(n));
            }
            break;

        case 2:
            // Fibonacci Calculation
            printf("Enter a number to get the Fibonacci number at that position: ");
            scanf("%d", &n);

            if (n < 0) {
                printf("Fibonacci is not defined for negative numbers.\n");
            } else {
                printf("Fibonacci number at position %d is: %lld\n", n, fibonacci(n));
            }
            break;

        default:
            printf("Invalid choice. Please select 1 or 2.\n");
            break;
    }

    return 0;
}
