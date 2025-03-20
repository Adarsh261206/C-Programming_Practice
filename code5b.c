#include <stdio.h>

// Recursive function to calculate the factorial of a number
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive case
}

// Recursive function to calculate the nth Fibonacci number
long long fibonacci(int n) {
    if (n == 0) {
        return 0; // Base case: F(0) = 0
    }
    if (n == 1) {
        return 1; // Base case: F(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int choice, n;

    // Menu to choose which function to use
    printf("Choose an option:\n");
    printf("1. Factorial\n");
    printf("2. Fibonacci\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Handle user choice
    if (choice == 1) {
        printf("Enter a number to calculate its factorial: ");
        scanf("%d", &n);
        if (n < 0) {
            printf("Factorial is not defined for negative numbers.\n");
        } else {
            printf("Factorial of %d is %lld\n", n, factorial(n));
        }
    } else if (choice == 2) {
        printf("Enter the position in the Fibonacci sequence: ");
        scanf("%d", &n);
        if (n < 0) {
            printf("Fibonacci sequence is not defined for negative numbers.\n");
        } else {
            printf("Fibonacci number at position %d is %lld\n", n, fibonacci(n));
        }
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
