#include<stdio.h>
int main()
{int n;int c=0;
    printf("Enter the NUmber\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        if(n%i==0){
            c++;
        }
    }
    if(c==2) {
        printf("The Entered number is a prime\n");
    }
    else {
        printf("The Entered number is not a prime\n");
    }
    return 0;

}