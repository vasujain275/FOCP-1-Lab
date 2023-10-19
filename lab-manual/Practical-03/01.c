// While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000. If quantity and price per item are input through the keyboard, write a program to calculate the total expenses.  

#include <stdio.h>

int main(){
    int qty,price,total;
    printf("Enter price of product: ");
    scanf("%d",&price);
    printf("Enter qty of product: ");
    scanf("%d",&qty);
    
    if (qty>1000){
        total = (price*qty) - ((price*qty)*0.1);
        printf("Your total expense - %d\n",total);
    }
    else{
        printf("Your expense is - %d\n", price*qty);
    }
    return 0;
}