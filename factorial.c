#include<stdio.h>
int main() {int a;int f=1;int i;
    printf("Enter the number\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        f=f*i;
    }
    printf("Factorial=%d",f);
    return 0;
}