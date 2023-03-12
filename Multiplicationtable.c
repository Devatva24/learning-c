#include<stdio.h>
int main() {int i,a;int m=1;
printf("Enter the number\n");
scanf("%d",&a);
for(i=1;i<=10;i++) {
    m=a*i;
    printf("%d * %d = %d\n",a,i,m);
}
return 0;
}
