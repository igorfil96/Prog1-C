#include <stdio.h>

int main(void) {
    int num, sum, count, positiveCount, negativeCount;
    float average, positivePercentage, negativePercentage;

    sum = 0;
    count = 0;
    positiveCount = 0;
    negativeCount = 0;

    printf("------------------------------------------------\n");
    printf("Enter integers (0 to finish and show results):\n");
    printf("------------------------------------------------\n1");
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        sum = sum + num;
        count = count + 1;

        if (num > 0) {
            positiveCount = positiveCount + 1;
        }
        else if (num < 0) {
            negativeCount = negativeCount + 1;
        }

        printf("Enter a number: ");
        scanf("%d", &num);
    }

    if (count > 0) {
        average = (float)sum / count;
        positivePercentage = (float)positiveCount / count * 100;
        negativePercentage = (float)negativeCount / count * 100;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
        printf("Positive count = %d\n", positiveCount);
        printf("Negative count = %d\n", negativeCount);
        printf("Positive percentage = %.2f%%\n", positivePercentage);
        printf("Negative percentage = %.2f%%\n", negativePercentage);
    }
    else {
        printf("No valid numbers were entered.\n");
    }

    return 0;
}