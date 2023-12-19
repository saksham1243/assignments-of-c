#include <stdio.h>
int main() {
    char operator;
    double num1, num2, result;
        do 
        {
        printf("Enter operator (+, -, *, /) or 'q' to quit: ");
        scanf(" %c", &operator);
        if (operator == 'q' || operator == 'Q') {
            printf("Calculator program terminated.\n");
            break;
        }
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
        if (operator == '+') {
            result = num1 + num2;
        } else if (operator == '-') {
            result = num1 - num2;
        } else if (operator == '*') {
            result = num1 * num2;
        } else if (operator == '/') {
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero is undefined.\n");
                continue;
            }
        } else {
            printf("Invalid operator! Please enter a valid operator.\n");
            continue;
        }
        printf("Result: %.2lf\n", result);
    } while (1);
    return 0;
}