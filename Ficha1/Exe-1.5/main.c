#include <stdio.h>

int main(void) {
    // Variable declaration
    float num1, num2;
    float sum, subtraction, product, quotient, remainder;

    // Getting user input
    printf("Enter first integer:");
    scanf("%f", &num1);
    printf("Enter second integer:");
    scanf("%f", &num2);

    // Calculations
    sum = num1 + num2;
    subtraction = num1 - num2;
    product = num1 * num2;

    // Safety check for division by zero
    if (num2 !=0) {
        quotient = num1 / num2;
    }else {
        quotient = 0;
    }

    // 4. Formatted Output
    printf("\n");

    printf("%-30s %8.2f + %8.2f = %10.2f\n", "Sun", num1, num2, sum);
    printf("%-30s %8.2f - %8.2f = %10.2f\n", "Subtraction", num1, num2, subtraction);
    printf("%-30s %8.2f x %8.2f = %10.2f\n", "Product", num1, num2, product);
    printf("%-30s %8.2f / %8.2f = %10.2f\n", "Quotient", num1, num2, quotient);

    printf("\nNote: Remainder (%%) is not possible with real numbers.\n");
    return 0;
}
