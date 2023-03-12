#include<stdio.h>
int main()
{int n;int rad,len,bread,base,height;
while(n!=4){
    printf("\t Menu Driven Program\n");
    printf("\t 1. For area of the circle\n");
    printf("\t 2. For area of rectangle\n");
    printf("\t 2. For area of triangle\n");
    printf("\t 4. To exit the loop\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Enter the radius of the cicle\n");
        scanf("%d",&rad);
        printf("AREA =%f",(3.14*rad*rad));
        break;
        case 2:
        printf("Enter the length and breadth\n");
        scanf("%d%d",&len,&bread);
        printf("AREA =%d",(len*bread));
        break;
        case 3:
        printf("Enter the base and height\n");
        scanf("%d%d",&base,&height);
        printf("AREA =%f",(0.5*base*height));
        break;
        case 4: 
        break;
        break;
    }
    }
}