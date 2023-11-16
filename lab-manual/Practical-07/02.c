// Write a C Program using functions to convert Binary Number to Decimal and vice-versa

#include <stdio.h>
#include <math.h>

// Function to convert binary to decimal
int binaryToDecimal(int n) {
    int decimal = 0, i = 0, remainder;
    while (n!=0) {
        remainder = n%10;
        n /= 10;
        decimal += remainder*pow(2,i);
        ++i;
    }
    return decimal;
}

// Function to convert decimal to binary
int decimalToBinary(int n) {
    int binary = 0, i = 1, remainder;
    while (n!=0) {
        remainder = n%2;
        n /= 2;
        binary += remainder*i;
        i *= 10;
    }
    return binary;
}

int main() {
    int n;

    printf("Enter a binary number: ");
    scanf("%d", &n);
    printf("Binary to Decimal: %d\n", binaryToDecimal(n));

    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Decimal to Binary: %d\n", decimalToBinary(n));

    return 0;
}