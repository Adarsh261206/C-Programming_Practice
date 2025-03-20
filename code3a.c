#include <stdio.h>

void operationA() {
    int subChoice;
    while (1) {
        printf("\nSub Menu for Operation A:\n");
        printf("1. Sub Operation A1\n");
        printf("2. Sub Operation A2\n");
        printf("3. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &subChoice);

        switch (subChoice) {
            case 1:
                printf("Performing Sub Operation A1...\n");
                break;
            case 2:
                printf("Performing Sub Operation A2...\n");
                break;
            case 3:
                return; // Return to main menu
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

void operationB() {
    int subChoice;
    while (1) {
        printf("\nSub Menu for Operation B:\n");
        printf("1. Sub Operation B1\n");
        printf("2. Sub Operation B2\n");
        printf("3. Back to Main Menu\n");
        printf("Enter your choice: ");
        scanf("%d", &subChoice);

        switch (subChoice) {
            case 1:
                printf("Performing Sub Operation B1...\n");
                break;
            case 2:
                printf("Performing Sub Operation B2...\n");
                break;
            case 3:
                return; // Return to main menu
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nMain 34 Menu:\n");
        printf("1. Perform Operation A\n");
        printf("2. Perform Operation B\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            while(getchar() != '\n'); // Clear invalid input
            continue; // Prompt again
        }

        switch (choice) {
            case 1:
                printf("You selected Operation A.\n");
                operationA();
                break;
            case 2:
                printf("You selected Operation B.\n");
                operationB();
                break;
            case 3:
                printf("Exiting the program.\n");
                return 0; // Exit the program
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
