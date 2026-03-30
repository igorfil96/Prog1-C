#include <stdio.h>

int main(void) {
    // Variable declaration
    int num1, num2;
    int sum, subtraction, product, quotient, remainder;

    // Getting user input
    printf("Enter first integer:");
    scanf("%d", &num1);
    printf("Enter second integer:");
    scanf("%d", &num2);

    // Calculations
    sum = num1 + num2;
    subtraction = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    remainder = num1 % num2;

    printf("Sum:%d\n", sum);
    printf("Difference:%d\n", subtraction);
    printf("Multiplication:%d\n", product);
    printf("Division:%d\n", quotient);
    printf("Remainder:%d\n", remainder);
    return 0;
}
