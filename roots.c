#include<math.h>
#include<stdio.h>
int main() { int a,b,c;float root, root1, root2, img1,img2, real;int d;
    printf("\nEnter the 3 constants\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==0 && b==0) {
        printf("Not an equation");
    }
    else if(a==0 && b!=0 && c!=0) {
            root=-(c/b);
            printf("Root is %f ",root);
        }
    else if(a!=0 && b!=0 && c!=0)
        {
            d=(b*b)-(4*a*c);
            if(d==0) {
                root=-b/(2*a);
                printf("Roots are %f",root);
            }
            else if(d>0) {
                root1=(-b+sqrt(d))/(2*a);
                root2=(-b-sqrt(d))/(2*a);
                printf("Roots are %f and %f",root1, root2);
            }
            else {
                real=-b/(2*a);
                img1=sqrt(-d)/(2*a);
                img2=-img1;
                printf("Roots are %f+i%f and %f-i%f",real,img1,real,img2);
            }
        }
        else {
            printf("Invalid input/n");
        }
        return 0;
    }