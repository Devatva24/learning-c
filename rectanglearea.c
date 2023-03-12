#include<stdio.h>
int main() {int l,b;
    printf("Enter the length and breadth of the rectangle\n");
    scanf("%d%d",&l,&b);
    float area=l*b;
    printf("Area of the rectangle=%f",area);
    return 0;
}