#include<stdio.h>
int main()
{int n;int f=1;
    printf("Enter the factorial of any number\n");
    scanf("%d",&n);
    for(int j=1;j<=100;j++){f=1;
    for(int i=1;i<=j;i++) {
        f=f*i;
    }
    if(f==n){
        printf("The required number is %d",j);
        break;
    }
    else {
        continue;
    }
    }
    return 0;
}
