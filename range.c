#include<stdio.h>
int main() {int a,b,i;
    printf("Enter the range\n");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++) {
        printf("\t%d",i);
    }
    return 0;
}