#include <stdio.h>

int main(void) {
    int number;
    int status;

    printf("Enter an integer:");
    status=scanf("%d", &number);

    if (status == 0) {
        printf("Error: Invalid input. Please enter a numeric value.\n");
        return 1;
    }

    //First Block
    if (number > 0) {
        printf("Positive Number\n");
    } else if (number < 0) {
        printf("Negative Number\n");
    } else {
        printf("Zero\n");
    }

    //Second Block
    if (number % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0;
}
