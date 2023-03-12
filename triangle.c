#include<stdio.h>
int main() {int a,b,c;
    printf("\nEnter the sides of the triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c) {
        printf("The entered triangle is an equilateral\n");
    }
    else if((a==b && b!=c) || (b==c && c!=a) || (c==a && c!=b)) {
        printf("The entered triangle is an isosceles\n");
    }
    else if(a!=b && b!=c) {
        printf("The entered triangle is a scalene\n");
    }
    else {
        printf("Invalid input");
    }
    return 0;
}