#include <stdio.h>

// Function prototype declarations
void callByValue(int a);
void callByReference(int *a);

int main() {
    int num1 = 10, num2 = 20;

    // Call by Value: The function gets a copy of the actual parameter's value
    printf("Before Call by Value: num1 = %d\n", num1);
    callByValue(num1);  // Passing by value
    printf("After Call by Value: num1 = %d\n", num1);  // num1 should remain unchanged

    // Call by Reference: The function gets the address of the actual parameter
    printf("\nBefore Call by Reference: num2 = %d\n", num2);
    callByReference(&num2);  // Passing by reference (address of num2)
    printf("After Call by Reference: num2 = %d\n", num2);  // num2 should be changed

    return 0;
}

// Function definition for Call by Value
void callByValue(int a) {
    printf("In callByValue function: Received a = %d\n", a);
    a = a + 5;  // Modify the local copy of the parameter
    printf("In callByValue function: After modification a = %d\n", a);
}

// Function definition for Call by Reference
void callByReference(int *a) {
    printf("In callByReference function: Received a = %d\n", *a);
    *a = *a + 5;  // Modify the original value by dereferencing the pointer
    printf("In callByReference function: After modification a = %d\n", *a);
}
