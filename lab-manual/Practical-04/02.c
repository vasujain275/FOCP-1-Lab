// A character is entered through keyboard. Write a C program to determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol using switch case. The following table shows the range of ASCII values for various characters.

#include<stdio.h>

int main(){
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z'){
        printf("Capital letter\n");
    }else if(ch >= 'a' && ch <= 'z'){
        printf("Small case letter\n");
    }else if(ch >= '0' && ch <= '9'){
        printf("Digit\n");
    }else{
        printf("Special symbol\n");
    }

    return 0;
}