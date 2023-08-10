#include<stdio.h>

int main(){
    double a,b;
    printf("Enter a:");
    scanf("%1f",&a);
    printf("Enter b:");
    scanf("%1f",&b);

    a=a-b;
    b=a+b;
    a=b-a;

    printf("\nAfter swapping, a=%.21f\n",a);
    printf("After swapping, b=%.21f",b);
    return 0;
}