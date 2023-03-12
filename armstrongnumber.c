#include<stdio.h>
#include<math.h>
int main()
{int n;int a;int b;
    printf("Enter the number\n");
    scanf("%d",&n);
    a=n;int c=0;int d;b=n;
    while(a!=0) {
        d=n%10;
        c++;
        a=a/10;
    }d=0;int sum=0;
    while(n>0) {
        d=n%10;
        sum=sum+pow(d,c);
        n=n/10;
    }
    if(sum==b) {
        printf("The Entered number is an Armstrong number\n");
    }
    else {
        
        printf("The Entered number is not an Armstrong number %d %d\n",sum,b);
    }
    return 0;
}

// Armstrong for n number of digits 
// a = 153
// cube each of the digits of the number and add it 

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
// 	int a,b,c,cube=0;
// 	printf("Enter the no. to check it's Armstrong or not:");
// 	scanf("%d",&a);
// 	c=a;
// 	while(a>0)
// 	{
// 		b=a%10;
// 		cube=cube+(b*b*b);
// 		a=a/10;
// 	}
// 	if(cube==c)
// 	{
// 		printf("It's an Arsmtrong No. that is %d",c);
// 	}
// 	else
// 	{
// 		printf("It's not an Armstrong No. that is %d",c);
// 	}
// 	return 0;
// }