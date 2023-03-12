#include<stdio.h>
int sumofdigit(int n)
{int s=0;int d;
    while(n>0)
    {
        d=n%10;
        s=s+d;
        n=n/10;
    }
    return s;
}
int main()
{int n;int a=n;int s=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(s>=1)
    {
        s=a-sumofdigit(a);
        printf("%d\t",a);
    }
    return 0;
}