#include <stdio.h>

int main(void) {
    int num1, num2;
    char op;
    double result;

    printf("--- Calculator (Switch Version) ---\n");
    printf("Enter First Integer\n");
    scanf("%d", &num1);

    printf("Enter Second Integer\n");
    scanf("%d", &num2);

    printf("Enter Operator\n");
    scanf(" %c", &op);

    //Switch Case
    switch (op) {
        case '+':
            result = num1 + num2;
            break;

        case '-':
            result = num1 - num2;
            break;

        case '*':
        case 'x':
            result = num1 * num2;
            break;

        case '/':
        case ':':
            if (num2 == 0) {
                printf("\nError: Division by zero\n");
                return 1;
            }
            result = (double) num1 / num2;
            break;

        case '%':
            if (num2 == 0) {
                printf("\nError: Remainder by zero!\n");
                return 1;
            }
            result = num1 % num2;
            break;

        default:
            printf("\nError: Unknown Operator '%c'.\n", op);
            return 1;
    }
    // Result
    printf("\nResult: %.2f\n", result);
    return 0;
}
