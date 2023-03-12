#include<stdio.h>
int main() {int a,b,i;int n=1;
    printf("Enter the number\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++){
        n=n*b;
    }
    printf("The result=%d",n);
    return 0;
}