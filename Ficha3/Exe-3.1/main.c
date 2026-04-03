#include <stdio.h>

int main(void) {
    int target, sum, i;

    //Validation
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &target);
        if (target <= 0) {
            printf("Invalid Input! The number must be greater than 0.\n");
        }
    }while (target <= 0);

    // --- Block 1:WHILE ---
    sum = 0;
    i = 1;

    while ( i <= target) {
        sum = sum + i;
        i++;
    }
    printf("Result using while:%d\n", sum);

    // --- Block 2: DO-WHILE ---
    sum = 0;
    i = 1;

    do{
        sum = sum + i;
        i++;
    }while(i <= target);
    printf("Result using do-while:%d\n", sum);

    // --- Block 3: FOR ---
    sum = 0;
    for (i = 1; i <= target; i++) {
        sum = sum + i;
    }
    printf("Result using for:%d\n", sum);
    return 0;
}