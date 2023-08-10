#include<stdio.h>

int main(){
    int i,n, a=0, b=1, c;
    printf("Enter the number of terms:\n");
    scanf("%d", &n);
    
    printf("Fibonacci Series:");

    for(i=0; i<n; i++)
    {
        c=a+b;
        printf("%d", c);
        a=b;
        b=c;
    }
    return 0;
}