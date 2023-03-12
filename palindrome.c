#include<stdio.h>
int main()
{int n;int sum;int a;
    printf("Enter the number\n");
    scanf("%d",&n);sum=0;a=n;
    while(n!=0){
        sum=sum*10+(n%10);
        n=n/10;
    }
    if(sum==a) {
        printf("The Entered Number is a palindrome\n");
    }
    else {
        printf("The Entered Number is not a palindrome\n");
    }
    return 0;
}