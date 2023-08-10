#include<stdio.h>

int main(){
    int num;
    printf("Enter an integar");
    scanf("%d", &num);

    switch(num%2)
    {
        case 0: printf("The number is even", num);
        break;
        case 1: printf("The number is odd", num);
        break;
    }
    return 0;
}