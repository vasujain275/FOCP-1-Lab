#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    switch (marks/10){
        case 10:
            printf("Grade A");
            break;
        case 9:
            printf("Grade A");
            break;
        case 8:
            printf("Grade B");
            break;
        case 7:
            printf("Grade B");
            break;
        case 6:
            printf("Grade C");
            break;
        case 5:
            printf("Grade C");
            break;
        default:
            printf("Grade D");
            break;
    }
}