#include<stdio.h>
int main() {char ch;char upper;
    printf("\nEnter the character in lower case\n");
    scanf("%c",&ch);
    upper=ch-32;
    printf("The entered letter in Upper case is=%c",upper);
    return 0;
}