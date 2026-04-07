#include <stdio.h>

int main(void) {
    int num, operations = 0;
    char option;

    // Initial number
    printf("Enter an integer: ");
    scanf("%d", &num);

    do {
        // Menu
        printf("\n************ Main Menu ************\n");
        printf("Number: %d\tOperations: %d\n", num, operations);
        printf("I - Increment\n");
        printf("D - Decrement\n");
        printf("Z - Zero\n");
        printf("F - Exit\n");
        printf("Option --> ");

        scanf(" %c", &option); // space before %c is important

        // Options
        if (option == 'I') {
            num = num + 1;
            operations++;
        }
        else if (option == 'D') {
            num = num - 1;
            operations++;
        }
        else if (option == 'Z') {
            num = 0;
            operations++;
        }
        else if (option == 'F') {
            printf("Program terminated.\n");
        }
        else {
            printf("Invalid option. Try again.\n");
        }

    } while (option != 'F');

    return 0;
}