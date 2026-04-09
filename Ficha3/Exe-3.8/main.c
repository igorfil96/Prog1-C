#include <stdio.h>

int main(void) {
    int number, digit, sum = 0;

    // Input validation
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &number);

        if (number <= 0) {
            printf("Invalid input. Please enter a positive number.\n");
        }
    } while (number <= 0);

    // Process digits
    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number = number / 10;
    }

    // Output
    printf("Sum of digits= %d\n", sum);
    return 0;
}
