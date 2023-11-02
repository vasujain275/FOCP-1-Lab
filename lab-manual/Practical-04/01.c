// Write a C Program to make a simple calculator performing +,-,/,* using switch-case. The program takes two integer operands and one operator from the user, performs the operation and then prints the result.

#include<stdio.h>

int main(){
    int a, b, result;
    char operator;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter the operator: ");
    scanf(" %c", &operator);

    switch(operator){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '/':
            result = a / b;
            break;
        case '*':
            result = a * b;
            break;
        default:
            printf("Invalid operator\n");
            return 1;
    }

    printf("Result: %d\n", result);

    return 0;
}