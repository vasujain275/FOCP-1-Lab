// Write a program using function to check whether the number can be expressed as the sum of two prime numbers.
// a) The program asks the user to input an integer.
// b) The user shall make a user-defined function named checksumPrime which takes one integer arguments and returns an integer.
// c) The program shall use for loop and if statement in the function.

#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int checksumPrime(int n) {
    int i, flag = 0;
    for (i = 2; i <= n / 2; ++i) {
        if (isPrime(i) && isPrime(n - i)) {
            flag = 1;
            break;
        }
    }
    return flag;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (checksumPrime(n) == 1)
        printf("%d can be expressed as the sum of two prime numbers.\n", n);
    else
        printf("%d cannot be expressed as the sum of two prime numbers.\n", n);
    return 0;
}