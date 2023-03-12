#include<stdio.h>
int main() {int a,b,c;
    printf("Enter the numbers to be compared\n");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?((a>c)?printf("A is the greatest\n"):printf("C is the greatest")):((b>c)?(printf("B is the greatest")):(printf("C is the greatest")));
    return 0;
}