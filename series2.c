// 1+(1+2)+(1+2+3)+(1+2+3+4)+.....
#include<stdio.h>
int main()
{int n;int s;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int j=1;j<=n;j++){s=0;
    for(int i=1;i<=j;i++) {
        s=s+i;
    }
    printf("%d+",s);
}
return 0;
}