#include<stdio.h>
int main() {int unit;float amt;
    printf("\nEnter the number of units\n");
    scanf("%d",&unit);
    if(unit<=50) {
        amt=50*3;
    }
    else if(unit>50 && unit<=100) {
        amt=((unit-50)*4.5)+(50*3);
    }
    else {
        amt=(50*3)+(4.5*50)+((unit-100)*7);
    }
    printf("The amount calculated is=%f",amt);
    return 0;
}