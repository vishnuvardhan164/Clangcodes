#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Adding the two numbers
    sum = num1 + num2;

    // Displaying the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
