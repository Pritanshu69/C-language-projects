#include<stdio.h>

int main(){
    int n, r ,sum=0, temp;

    printf("Enter the number\n");
    scanf("%d", &n);

    temp=n;

    while(n>0){
        r = n%10;
        sum=sum+(r * r * r);
        n=n/10;
    }
    if(sum == temp)
    {
        printf("The number is an Armstrong Number\n", temp);
    }
    else
    {
        printf("The number is not an Armstrong Number\n", temp);
    }
    return 0;
}