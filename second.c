#include<stdio.h>
int main() {
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("The sum of the two entered numbers %d and %d is %d",a,b,c);
    return 0;
}