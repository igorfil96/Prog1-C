#include <stdio.h>

int main(void) {
    int number1, number2, number3;
    int status;

    printf("Provide first integer::");
    scanf("%d", &number1);
    printf("Provide second integer::");
    scanf("%d", &number2);
    printf("Provide third integer::");
    scanf("%d", &number3);

    if (number1 != number2 && number1 != number3 && number2 != number3) {
        printf("The numbers are all different.\n");
    } else {
        printf("The numbers are even.\n");
    }
    return 0;
}
