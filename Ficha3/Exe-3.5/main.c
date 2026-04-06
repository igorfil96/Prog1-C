#include <stdio.h>

int main(void) {
    int m, n, i;
    double sum = 0.0;
    double term;

    // Input with validation
    do {
        printf("Enter value for m (positive): ");
        scanf("%d", &m);

        printf("Enter value for n (positive and greater than m): ");
        scanf("%d", &n);

        if (m <= 0 || n <= 0 || n <= m) {
            printf("Invalid values. Ensure m > 0 and n > m.\n");
        }

    } while (m <= 0 || n <= 0 || n <= m);

    // Summation
    for (i = m; i <= n; i++) {
        term = (2.0 * i) / (5 + i * i);
        sum = sum + term;
    }

    // Output
    printf("Result of the summation = %.4lf\n", sum);

    return 0;
}