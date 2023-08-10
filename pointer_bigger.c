#include<stdio.h>

int main(){
    int n1,n2;
    int*ptr1,*ptr2;

    printf("Enter the value of n1");
    scanf("%d", &n1);

    printf("Enter the value of n2");
    scanf("%d", &n2);

    ptr1= &n1;
    ptr2= &n2;

    if(*ptr1>*ptr2)
    {
        printf("%d is bigger", n1);
    }
    else{
        printf("%d is bigger", n2);
    }
    return 0;
}