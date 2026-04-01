#include <stdio.h>

int main(void) {
    //Variable
    int num1, num2, num3;
    char order;

    //User Input
    printf("--- Enter Three Integers ---\n");
    printf("----------------------------\n");
    printf("Enter First Integer:\n");
    scanf("%d", &num1);
    printf("----------------------------\n");
    printf("Enter Second Integer:\n");
    scanf("%d", &num2);
    printf("----------------------------\n");
    printf("Enter Third Integer:\n");
    scanf("%d", &num3);

    //Logic
    //Compare 1st and 2nd
    if (num1 > num2) {
        num1 = num1 + num2;
        num2 = num1 - num2;
        num1 = num1 - num2;
    }

    //Compare 1st and 3rd
    if (num1 > num3) {
        num1 = num1 + num3;
        num3 = num1 - num3;
        num1 = num1 - num3;
    }

    //Compare 2nd and 3rd
    if (num2 > num3) {
        num2 = num2 + num3;
        num3 = num2 - num3;
        num2 = num2 - num3;
    }

    //Order Selection
    printf("\nOrder: (A)scending or (D)escending:");
    scanf(" %c", &order);

    printf("\nSorted Values:\n");

    //Output
    switch (order) {
        case 'A': case 'a':
            printf("%d\n%d\n%d", num1, num2, num3);
            break;
        case 'D': case 'd':
            printf("%d\n%d\n%d", num1, num2, num3);
            break;
        default:
            printf("Error: Invalid choice!\n");
            break;
    }

    return 0;
}