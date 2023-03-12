#include<stdio.h>
int main() {int marks;char grade;
    printf("\nEnter the marks\n");
    scanf("%d",&marks);
    if(marks>=90 && marks<=100) {
        grade='O';
        printf("Grade=%c",grade);
    }
    else if(marks>=80 && marks<90) {
        grade='E';
        printf("Grade=%c",grade);
    }
    else if(marks>=70 && marks<80) {
        grade='A';
        printf("Grade=%c",grade);
    }
    else if(marks>=60 && marks<70) {
        grade='B';
        printf("Grade=%c",grade);
    }
    else if(marks>=50 && marks<60) {
        grade='C';
        printf("Grade=%c",grade);
    }
    else if(marks>=40 && marks<50) {
        grade='D';
        printf("Grade=%c",grade);
    }
    else {
        grade='F';
        printf("Grade=%c",grade);
    }
    return 0;
}