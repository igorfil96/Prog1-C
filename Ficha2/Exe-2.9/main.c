#include <stdio.h>

int main(void) {
    //Variable Declaration
    int category, dependents;
    float salaryBase, bonusPercent, finalSalary;

    //User Input
    printf("--- Employee Salary Calculator ---\n");
    printf("Enter Category (1, 2, or 3): ");
    scanf("%d", &category);

    printf("Enter Number of Dependents: ");
    scanf("%d", &dependents);

    //Logic: Determine Base Salary and Bonus Percentage

    switch (category) {
        case 1:
            salaryBase = 600;
            if (dependents == 1) {
                bonusPercent = 0.05; // 5%
            } else if (dependents >= 2) {
                bonusPercent = 0.09; // 9%
            } else {
                bonusPercent = 0.00; // 0%
            }
            break;

        case 2:
            salaryBase = 750;
            if (dependents == 1) {
                bonusPercent = 0.02; // 2%
            }else if (dependents >= 2) {
                bonusPercent = 0.05; // 5%
            }else {
                bonusPercent = 0.00;
            }
            break;

        case 3:
            salaryBase = 1000;
            if (dependents == 1) {
                bonusPercent = 0.02; // 2%
            }else if (dependents >= 2) {
                bonusPercent = 0.05; // 5%
            }else {
                bonusPercent = 0.00;
            }
            break;
        default:
            printf("\nError: Invalid Category!\n");
            return 1;
    }

    //Final Calculation
    finalSalary = salaryBase + (salaryBase * bonusPercent );

    //Output
    printf("\n--- Results ---\n");
    printf("Base Salary: %.2f EUR\n", salaryBase);
    printf("Bonus Applied: %.0f%%\n", bonusPercent * 100);
    printf("Final Monthly Earnings: %.2f EUR\n", finalSalary);

    return 0;
}
