#include<stdio.h>
int main() {char ch;
    printf("\nEnter the character to be checked\n");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
        printf("The entered character is a vowel\n");
    }
    else if(ch>='0' && ch<='9') {
        printf("The entered character is a digit");
    }
    else {
        printf("The entered character is a consonant");
    }
    return 0;
}