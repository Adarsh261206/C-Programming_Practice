#include <stdio.h>

int main() {
    char ch;
    char str[100];
    int num;
    float fnum;

    printf("Enter a character: ");
    ch = getchar(); 
    printf("You entered: ");
    putchar(ch); 
    putchar('\n');

    // Consume the newline character left in the input buffer
    while (getchar() != '\n');

    printf("Enter an integer and a floating-point number: ");
    scanf("%d %f", &num, &fnum);
    printf("You entered integer: %d and float: %.2f\n", num, fnum);

    // Consume the newline character left in the input buffer
    while (getchar() != '\n');

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Use fgets instead of gets
    printf("You entered: ");
    puts(str); 

    return 0;   
}