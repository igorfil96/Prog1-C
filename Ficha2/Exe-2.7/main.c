#include <stdio.h>

int main(void) {
    int add, sum = 0;

    do {
        printf("------------------------\n");
        printf("Enter a Number (1-10):\n");
        printf("------------------------\n");

        scanf("%d", &add);

        if (add >= 1 && add <= 10) {
            for (int i = 1; i <= add; i++) {
                sum = sum + i;
            }
            printf("The sum of numbers up to %d is: %d\n", add, sum);
        } else {
            printf("Invalid number. Please enter a value between 1 and 10 .\n");
        }
    } while (add < 1 || add > 10);

    return 0;
}
