// Design a calculator using switch case that performs +,-,/,*

#include <stdio.h>

int main(){
    char op;
    int a,b;
    printf("Enter 2 numbers to perfom operations:");
    scanf("%d %d", &a,&b);
    printf("Enter the operation (+,/,*,-): ");
    scanf("%c",&op);

    switch (op)
    {
    case '+':
        printf("Your result is = %d",a+b);
        break;
    case '-':
        printf("Your result is = %d",a-b);
        break;
    case '*':
        printf("Your result is = %d",a*b);
        break;
    case '/':
        printf("Your result is = %d",a/b);
        break;
    default:
        printf("Enter vaild input please!");
        break;
    }
    return 0;
}