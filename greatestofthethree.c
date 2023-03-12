#include<stdio.h>
int main() {int a,b,c,d;
    printf("\nEnter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b) {
        d=a;
        if(c>d) {
             printf("%d is the greatest",c);
        }
        else {
            printf("%d is the greatest",d);
        }
    }
    else if(a<b) {
        d=b;
        if(c>d) {
            printf("%d is the greatest",c);
        }
        else {
            printf("%d is the greatest",d);
        }
    }
    else {
        if(c>a) {
            printf("%d is the greatest",c);
        }
        else {
            if(c>a) {
            printf("%d is the greatest",a);
        }
        }
    }
    return 0;
}