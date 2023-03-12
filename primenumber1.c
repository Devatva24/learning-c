#include<stdio.h>
int main()
{int c;
    for(int j=1;j<=1000;j++)
    {c=0;
    for(int i=1;i<=j;i++)
    {
        if(j%i==0){
            c++;
        }
    }
    if(c==2) {
        printf("%d\t",j);
    }
    }
    return 0;
}