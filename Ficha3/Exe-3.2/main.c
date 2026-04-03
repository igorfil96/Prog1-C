#include <stdio.h>
#include <ctype.h>

int main(void) {
    //--- Variables ---
    int target, sum, i;
    char option;
    int countW = 0;
    int countD = 0;
    int countF = 0;

    //--- Main Loop (Menu) ---
    do {
        //--- Step 1 : Request a Number
        printf("Enter a Positive Integer:\n");
        scanf(" %d", &target);

        //Validation for target number
        if (target <= 0) {
            printf("Invalid Input! Please enter a number greater than 0.\n");
            continue; // Skip the rest of the loop and ask again
        }

        // --- Step 2 : Display the menu
        printf("--- LOOP SECTION MENU ---");
        printf("\n(W) While Loop");
        printf("\n(D) Do-While Loop");
        printf("\n(F) For Loop");
        printf("\n(S) Exit and Show Stats");
        printf("\nOPTION ->");
        scanf(" %c", &option);

        // Step 3: Execute logic
        switch (toupper(option)) {
            case 'w':
            case 'W':
                sum = 0;
                i = 1;
                while (i <= target) {
                    sum = sum + i;
                    i++;
                }
                printf("Result using While: %d\n", sum);
                countW++;
                break;

            case 'd':
            case 'D':
                sum = 0;
                i = 1;
                do {
                    sum += i;
                    i++;
                } while (i <= target);
                printf("Result using Do-While: %d\n", sum);
                countD++;
                break;

            case 'f':
            case 'F':
                sum = 0;
                for (i = 1; i <= target; i++) {
                    sum += i;
                }
                printf("Result using For: %d\n", sum);
                countF++;
                break;

            case 's':
            case 'S':
                printf("Exiting program and showing statistics...\n");
                break;

            default:
                printf("Invalid option! Please try again.n\n");
        }
    } while (toupper(option) != 'S');

    //Step 4: Final Statistics
    printf("\n--- FINAL STATISTICS ---");
    printf("\nWhile loop was used: %d times", countW);
    printf("\nDoWhile loop was used: %d times", countD);
    printf("\nFor loop was used: %d times", countF);
    return 0;
}
