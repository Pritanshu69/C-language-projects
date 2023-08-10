#include<stdio.h>

int main(){
    float first,second,temp;
    printf("Enter the first number:");
    scanf("%1f",&first);

    printf("Enter the second number:");
    scanf("%1f",&second);

    temp=first;
    first=second;
    second=temp;

    printf("After swapping, first number:%.21f\n",&first);
    printf("After swapping, second number:%.21f\n",&second);
    return 0;
}