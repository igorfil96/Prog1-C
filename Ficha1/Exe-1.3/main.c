#include <stdio.h>

int main() {
    // Defining constants
    const float pi = 3.14159;

    // Declaring variables
    int number, result;
    float area, perimeter;

    // Getting user input
    printf("Enter an integer value: ");
    scanf("%d", &number);

    // Calculations
    result=number*2;
    perimeter=2*pi*number;
    area=pi*number*number;

    printf("The result is:%d\n", result);
    printf("Perimeter:%9.1f\n", perimeter);
    printf("Area:%14.2f\n", area);
    return 0;
}