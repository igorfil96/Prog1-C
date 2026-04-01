#include <stdio.h>

int main(void) {
    //Variable Declaration
    int num1, num2, num3, temp;
    char order;

    //User Input
    printf("--- Integer Sorter ---\n");
    printf("----------------------\n");
    printf("Enter First Integer: ");
    scanf("%d", &num1);
    printf("Enter Second Integer: ");
    scanf("%d", &num2);
    printf("Enter Third Integer: ");
    scanf("%d", &num3);

    //Sorting Logic
    // Compare 1st and 2nd
    // Using a temporary variable to swap num1 and num2
    // 1. Store num1 in temp
    // 2. Move num2 to num1
    // 3. Move temp (original num1) to num2
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Compare 1st and 3rd
    if (num1 > num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    // Compare 2nd and 3rd
    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    //Order Selection
    printf("\nOrder: (A)scending or (D)escending: ");
    // Note: The space before %c is vital to clear the buffer!
    scanf(" %c", &order);

    printf("\nSorted Values:\n");

    //Output based on choice
    switch (order) {
        case 'A':
        case 'a':
            printf("%d\n%d\n%d\n", num1, num2, num3);
            break;

        case 'D':
        case 'd':
            printf("%d\n%d\n%d\n", num3, num2, num1);
            break;

        default:
            printf("Error: Invalid choice!\n");
            break;
    }

    return 0;
}
