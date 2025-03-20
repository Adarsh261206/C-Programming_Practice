#include <stdio.h>

int main() {
   
    int a = 10, b = 20;
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b); 
    printf("a - b = %d\n", a - b); 
    printf("a * b = %d\n", a * b); 
    printf("b / a = %d\n", b / a); 
    printf("b %% a = %d\n", b % a); 
    printf("\nRelational Operators:\n");
    printf("a == b: %d\n", a == b); 
    printf("a != b: %d\n", a != b); 
    printf("a > b: %d\n", a > b); 
    printf("a < b: %d\n", a < b); 
    printf("a >= b: %d\n", a >= b); 
    printf("a <= b: %d\n", a <= b); 
    int x = 1, y = 0;
    printf("\nLogical Operators:\n");
    printf("x && y: %d\n", x && y); 
    printf("x || y: %d\n", x || y);
    printf("!x: %d\n", !x);     
    int c = 5;
    printf("\nAssignment Operators:\n");
    c += 5;
    printf("c += 5: %d\n", c);
    c -= 2; 
    printf("c -= 2: %d\n", c);
    c *= 2; 
    printf("c *= 2: %d\n", c);
    c /= 3; 
    printf("c /= 3: %d\n", c);
    printf("\nUnary Operators:\n");
    int d = 5;
    printf("++d: %d\n", ++d); 
    printf("d++: %d\n", d++); 
    printf("--d: %d\n", --d); 
    printf("d--: %d\n", d--); 
    int max = (a > b) ? a : b; 
    printf("\nConditional Operator:\n");
    printf("Max of a and b: %d\n", max);
    printf("\nBitwise Operators:\n");
    printf("a & b: %d\n", a & b); 
    printf("a | b: %d\n", a | b); 
    printf("a ^ b: %d\n", a ^ b); 
    printf("~a: %d\n", ~a);    
    printf("a << 1: %d\n", a << 1); 
    printf("a >> 1: %d\n", a >> 1); 
    int e = (a = 3, b = 4); 
    printf("\nComma Operator:\n");
    printf("a: %d, b: %d\n", a, b);
    printf("\nOther Operators:\n");
    int arr[5] = {1, 2, 3, 4, 5};
    printf("Size of arr: %zu\n", sizeof(arr)/sizeof(arr[0])); // Size of array

    return 0;
}
