//1!+2!+3!+4!+....n!
#include<stdio.h>
int main()
{int n;int f,sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){f=1;
        for(int j=1;j<=i;j++){
            f=f*j;
        }
        sum=sum+f;
        printf("%d+",f);
    }
    printf("The required solution of the series is %d",sum);
    return 0;
}