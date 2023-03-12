#include<stdio.h>
int main() {int income;float tax;
    printf("\nEnter the income\n");
    scanf("%d",&income);
    if(income<150000) {
        printf("No Tax\n");
    }
    else if(income>150000 && income<=300000) {
        tax=0.10*income;
        printf("Tax=%f",tax);
    }
    else if(income>300000 && income<=500000) {
        tax=0.20*income;
        printf("Tax=%f",tax);
    }
    else {
        tax=0.30*income;
        printf("Tax=%f",tax);
    }
    return 0;
}