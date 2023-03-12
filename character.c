#include<stdio.h>
int main() {char ch;
    printf("\nEnter a character\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z') {
        printf("The entered character is a lower case alphabet\n");
    }
    else if(ch>='A' && ch<='Z') {
        printf("The entered character is a upper case alphabet\n");
    }
    else if(ch>='0' && ch<='9') {
        printf("The entered character is a digit\n");
    }
    return 0;
}