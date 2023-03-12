#include<stdio.h>
int main()
{int n;int sum=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i=1;i<n;i++) {
        if(n%i==0){
            sum=sum+i;
        }
        else {
            continue;
        }
    }
    if(sum==n) {
        printf("Perfect Number\n");
    }
    else {
        printf("Not a Perfect Number\n");
    }
    return 0;
}