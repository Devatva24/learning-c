#include<stdio.h>
int main() {int a;
    printf("\nEnter the number to be checked\n");
    scanf("%d",&a);
    (a%2==0)?(printf("The entered number is even\n")):(printf("\nThe entered number is odd\n"));
    return 0;
}