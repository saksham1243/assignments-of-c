//program for calculator using elseif and do while
#include <stdio.h>
int main() {
    char operator;
    double num1, num2, result;
    do {
        // Input from the user
        printf("Enter an operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);
        // Check if the user wants to quit
        if (operator == 'q' || operator == 'Q') {
            printf("Exiting the calculator program.\n");
            break;
        }
        // Input two numbers
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
        // Perform the calculation based on the operator
        if (operator == '+') {
            result = num1 + num2;
        } else if (operator == '-') {
            result = num1 - num2;
        } else if (operator == '*') {
            result = num1 * num2;
        } else if (operator == '/') {
            // Check if the divisor is not zero
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                continue;  // Continue to the next iteration of the loop
            }
        } else {
            printf("Error: Invalid operator.\n");
            continue;  // Continue to the next iteration of the loop
        }
        // Display the result
        printf("Result: %.2lf\n", result);
    } while (1);  // Infinite loop, use 'break' to exit
    return 0;
}
