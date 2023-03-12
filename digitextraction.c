#include<stdio.h>
int main() {int a;int d;
    printf("Enter the number\n");
    scanf("%d",&a);
    while(a>0) {
        d=a%10;
        printf("%d\t",d);
        a=a/10;
    }
    return 0;
}