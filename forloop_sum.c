#include<stdio.h>

int main(){
    int i, n, sum=0;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum += i;
    }
    printf("The sum of first natural number from 1 to %d = %d", n, sum);
    return 0;
}