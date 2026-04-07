#include <stdio.h>

int main(void) {
    // Price List
    const float PRICE_STEAK_SANDWICH = 2.40;
    const float PRICE_HOTDOG = 1.00;
    const float PRICE_CHIPS = 1.80;
    const float PRICE_CAKE = 0.50;
    const float PRICE_JUICE = 0.60;

    // Per Client
    int steakSandwich, hotdog, chips, cake, juice;
    float totalClient;

    // Global totals
    float totalRevenue = 0;
    int totalItems = 0;

    int totalSteakSandwich = 0, totalHotdog = 0, totalChips = 0, totalCake = 0, totalJuice = 0;

    char option;

    do {
        // Input quantities
        printf("\n--- New Client ---\n");

        printf("Steak Sandwich: ");
        scanf("%d", &steakSandwich);

        printf("Hotdog: ");
        scanf("%d", &hotdog);

        printf("Chips: ");
        scanf("%d", &chips);

        printf("Cake: ");
        scanf("%d", &cake);

        printf("Juice: ");
        scanf("%d", &juice);

        // Calculate client total
        totalClient = (steakSandwich * PRICE_STEAK_SANDWICH) +
                      (hotdog * PRICE_HOTDOG) +
                      (chips * PRICE_CHIPS) +
                      (cake * PRICE_CAKE) +
                      (juice * PRICE_JUICE);

        // Show invoice
        printf("\n--- Invoice ---\n");
        printf("Steak Sandwich: %d\n", steakSandwich);
        printf("Hotdog: %d\n", hotdog);
        printf("Chips: %d\n", chips);
        printf("Cake: %d\n", cake);
        printf("Juice: %d\n", juice);
        printf("Total to pay: %.2f Euros\n", totalClient);

        // Update global totals
        totalRevenue += totalClient;

        totalSteakSandwich += steakSandwich;
        totalHotdog += hotdog;
        totalChips += chips;
        totalCake += cake;
        totalJuice += juice;

        totalItems += (steakSandwich + hotdog + chips + cake + juice);

        // Ask to continue
        printf("\nAnother client? (S/N): ");
        scanf(" %c", &option);

    } while (option == 'S' || option == 's');

    // Final statistics
    printf("\n--- Final Statistics ---\n");
    printf("Total revenue: %.2f Euros\n", totalRevenue);
    printf("Total items sold: %d\n", totalItems);

    if (totalItems > 0) {
        printf("Steak Sandwich: %d (%.2f%%)\n", totalSteakSandwich, (float)totalSteakSandwich / totalItems * 100);
        printf("Hotdog: %d (%.2f%%)\n", totalHotdog, (float)totalHotdog / totalItems * 100);
        printf("Chips: %d (%.2f%%)\n", totalChips, (float)totalChips / totalItems * 100);
        printf("Cake: %d (%.2f%%)\n", totalCake, (float)totalCake / totalItems * 100);
        printf("Juice: %d (%.2f%%)\n", totalJuice, (float)totalJuice / totalItems * 100);
    }

    return 0;
}