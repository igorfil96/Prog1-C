#include <stdio.h>

int main(void) {
    int number1, number2, number3;

    // Requesting input from the user
    printf("Enter three integers separated by spaces: ");

    // Reading all three values in a single line (common for this type of exercise)
    if (scanf("%d %d %d", &number1, &number2, &number3) != 3) {
        printf("Error: Please enter valid numeric values.\n");
        return 1;
    }

    //* * Logical Check:
    if (number1 == number2 || number2 == number3 || number1 == number3) {
        printf("Equal values were entered.\n");
    } else {
        printf("No equal values were entered (all are unique).\n");
    }

    return 0;
}