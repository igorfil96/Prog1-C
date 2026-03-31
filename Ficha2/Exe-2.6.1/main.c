#include <stdio.h>

int main(void) {
    int num1, num2;
    char op;
    double result;

    // 1. Input Section
    printf("--- C Calculator (Logical Version) ---\n");
    printf("Enter First Integer:\n");
    scanf("%d", &num1);

    printf("Enter Second Integer:\n");
    scanf("%d", &num2);

    printf("Enter Operator (+, -, *, x, *, :, %%):");
    scanf(" %c", &op);

    // 2. Logic Section
    if (op == '+') {
        result = num1 + num2;
    } else if (op == '-') {
        result = num1 - num2;
    } else if (op == '*' || op == 'x') {
        result = num1 * num2;
    } else if (op == '/' || op == ':') {
        if (num2 == 0) {
            printf("\nError : Division by zero is not allowed\n");
            return 1;
        }
        result = (double) num1 / num2;
    } else if (op == '%') {
        if (num2 == 0) {
            printf("\nError : Division by zero is not allowed\n");
            return 1;
        }
        result = num1 % num2;
    } else {
        printf("Error - Invalid operation\n");
        return 1;
    }
    // 3. Output Section
    printf("The Result is:%0.2lf\n", result);
    return 0;
}
