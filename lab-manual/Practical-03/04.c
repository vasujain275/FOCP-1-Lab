// Write a program in C to read the age and display whether the candidate is eligible to vote or not. 

#include <stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>=18){
        printf("You are eligible to vote\n");
    }
    else{
        printf("You are not eligible to vote\n");
    }
    return 0;
}