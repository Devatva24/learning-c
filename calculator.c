#include<stdio.h>
int main() {char ch;int a,b;float ans;
    printf("\nEnter the operator to be performed\n");
    scanf(" %c",&ch);
    printf("\nEnter the operands upon which operation is to be performed\n");
    scanf("%d%d",&a,&b);
    if(ch=='+') {
        ans=a+b;
        printf("Solution is=%f",ans);
    }
    else if(ch=='-') {
        ans=a-b;
        printf("Solution is=%f",ans);
    }
    else if(ch=='/') {
        ans=a/b;
        printf("Solution is=%f",ans);
    }
    else if(ch=='*') {
        ans=a*b;
        printf("Solution is=%f",ans);
    }
    else {
        printf("Invalid Input");
    }
    return 0;
}