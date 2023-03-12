#include<stdio.h>
int main()
{int a;int n,s;int d;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("NEW NUMBER \t SUM OF DIGITS\n");
    a=n;
    while(n>=1)
    {s=0;
       while(a!=0)
       {
        d=a%10;
        s=s+d;
        a=a/10;
       }
       printf("%d \t\t %d\n",n,s);
       n=n-s;
       a=n;
    }
    return 0;
}