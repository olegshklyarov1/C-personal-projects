#include <stdio.h>

int main()
{

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("\nEnter a valid number: ");
    scanf("%lf", &num1);

    printf("\nEnter another number: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nthe result of the addition is : %lf", result);
        break;
    case '-':
        result = num1 - num2;
        printf("\nthe result of the substraction is : %lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nthe result of the multiplication is : %lf", result);
        break;
    case '/':
        result = num1 / num2;
        printf("\nthe result of the division is : %lf", result);
        break;

    default:
        printf(" %c is not valid", operator);
        break;
    }

    return 0;
}