// Write a C program using switch case to display grade of students based on the total marks obtained by the student in five subjects.
// Here is the range of Grades:
// Marks >= 90 : Grade A
// Marks >= 70 && < 90 : Grade B
// Marks >= 50 && < 70 : Grade C
// Marks < 50 : Grade D
// Marks<50 : Fail
// Example Program Outcome
// Enter marks of 5 subjects
// 97 89 78 87 68
// Grade : B

#include<stdio.h>

int main(){
    int marks[5], total = 0;
    char grade;

    printf("Enter marks of 5 subjects: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    switch(total / 5){
        case 90 ... 100:
            grade = 'A';
            break;
        case 70 ... 89:
            grade = 'B';
            break;
        case 50 ... 69:
            grade = 'C';
            break;
        case 0 ... 49:
            grade = 'D';
            break;
        default:
            printf("Invalid marks\n");
            return 1;
    }

    printf("Grade: %c\n", grade);

    return 0;
}