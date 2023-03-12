//digit->factorial->sum = number itself
#include<stdio.h>
int main()
{int n;int f;int sum=0;int a;
    printf("Enter the number\n");
    scanf("%d",&n);
    a=n;
    while(n!=0){f=1;
        for(int i=1;i<=(n%10);i++){
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
    }
    if(sum==a){
        printf("The Entered number is a strong number\n");
    }
    else{
        printf("The Entered number is not a strong number\n");
    }
    return 0;
}