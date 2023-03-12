#include<stdio.h>
int main()
{int c;
    for(int i=1;i<=100;i++) {c=0;
        for(int j=1;j<=i;j++) {
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
            if((i%10)==3)
            printf("%d",i);
            else
            {int a=i;
                while(a!=0){
                    
                }
            }
        }
    }
}