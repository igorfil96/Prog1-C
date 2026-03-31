#include <math.h>
#include <stdio.h>

int main(void) {
    int side1, side2, side3;

    printf("Enter the length of the first side:\n");
    scanf("%d", &side1);
    printf("Enter the length of the second side:\n");
    scanf("%d", &side2);
    printf("Enter the length of the third side:\n");
    scanf("%d", &side3);

    // 1. Triangle Existence Check:
    if (abs(side1 - side2) < side3 && side3 <(side1 + side2)) {}

    // 2. Classification Logic
    if (side1 == side2 && side2 == side3) {
        printf("The sides form an Equilateral triangle.\n");
    }else if (side1 != side2 && side2 != side3 && side1 != side3) {
        printf("The sides form an Isosceles triangle.\n");
    }
    else  {
        // If the existence rule is not met
        printf("Error: These lengths cannot form a triangle.\n");
    }

        return 0;
}