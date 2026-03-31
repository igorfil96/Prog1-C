#include <stdio.h>

int main(void) {
    double purchaseValue, finalPrice;

    printf("Enter the Purchase Value:\n");
    scanf("%lf", &purchaseValue);

    if (purchaseValue <= 500) {
        printf("Discount applied: 0%%\n");
        finalPrice = purchaseValue;

    } else if (purchaseValue <= 1250) {
        printf("Discount applied: 4%%\n");
        finalPrice = purchaseValue * 0.96;

    } else if (purchaseValue <= 2000) {
        printf("Discount applied: 6%%\n");
        finalPrice = purchaseValue * 0.94;

    } else if (purchaseValue > 2000) {
        printf("Discount applied: 8%%\n");
        finalPrice = purchaseValue * 0.92;
    }
    printf("\n---------------------------\n");
    printf("Final Amount to pay:%.2f EUR", finalPrice);

    return 0;
}
