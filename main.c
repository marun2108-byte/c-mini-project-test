#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    int choice;

    while(1) {
        printf("\n--- MENU ---\n");
        printf("1. Enter Name\n");
        printf("2. Exit\n");
        printf("Choose an option: ");
        
        // Input validation for the choice (Compulsory requirement)
        if (scanf("%d", &choice) != 1) {
            printf("Please enter a valid number.\n");
            while(getchar() != '\n'); // Clear buffer
            continue;
        }

        switch(choice) {
            case 1:
                printf("What is your name? ");
                scanf("%s", name);
                printf("Hello, %s!\n", name);
                break;
            case 2:
                printf("Exiting program...\n");
                return 0; // This actually stops the program
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}