//     The marks obtained by a student in 5 different subjects are input through the keyboard. The student gets a division as per the following rules: Percentage above or equal to 60 - First division Percentage between 50 and 59 - Second division Percentage between 40 and 49 - Third division Percentage less than 40 - Fail Write a program to calculate the division obtained by the student.  

#include <stdio.h>

int main(){
    int marks[5],total=0;
    float percentage;
    printf("Enter marks of 5 subjects: ");
    for (int i=0;i<5;i++){
        scanf("%d",&marks[i]);
        total += marks[i];
    }
    percentage = (float)total/5;
    printf("Your percentage is - %.2f\n",percentage);
    if (percentage>=60){
        printf("You got First division\n");
    }
    else if (percentage>=50 && percentage<=59){
        printf("You got Second division\n");
    }
    else if (percentage>=40 && percentage<=49){
        printf("You got Third division\n");
    }
    else{
        printf("You failed\n");
    }
    return 0;
}