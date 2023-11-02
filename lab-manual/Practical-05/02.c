// Program to add numbers until the user enters zero

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int sum = 0;
    while(num != 0){
        sum += num;
        printf("Enter the number: ");
        scanf("%d", &num);
    }
    printf("Sum: %d\n", sum);
    return 0;
}