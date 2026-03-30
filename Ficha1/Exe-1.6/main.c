#include <stdio.h>

// Constants
#define BASE_SALARY  600
#define COMMISSION_PER_CAR  100
#define SALES_PERCENTAGE  0.05

int main(void) {
    int carsSold;
    float amountInvoiced, carCommissionTotal, salesCommissionTotal, totalSalary;

    // Input Section
    printf("Indicate the number of cars sold.:");
    scanf("%d", &carsSold);

    printf("Please indicate the amount invoiced.");
    scanf("%f", &amountInvoiced);

    // Processing Section
    carCommissionTotal = carsSold * carCommissionTotal;
    salesCommissionTotal = amountInvoiced * SALES_PERCENTAGE;
    totalSalary = BASE_SALARY + carCommissionTotal + salesCommissionTotal;

    // Output Section (Formatting for a clean report)
    printf("\nMATURITY / SALARY SLIP:\n");
    printf("----------------------------------------\n");
    printf(" Base Salary: %13.2f\n", (float)BASE_SALARY);
    printf(" Per Car Sold: %10.2f\n", carCommissionTotal);
    printf(" 5.00%% of Sales: %8.2f\n", salesCommissionTotal);
    printf("------------------------------------\n");
    printf(" TOTAL:              %2.2f\n", totalSalary);
    printf("----------------------------------------\n");

    return 0;
}
