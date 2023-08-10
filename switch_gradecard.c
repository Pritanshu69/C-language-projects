#include<stdio.h>

int main(){
    int marks;
    printf("---------------------\n");
    printf("Enter the marks between 1-100");
    scanf("%d", &marks);
    switch(marks/10){
         case 10:
    case 9:printf("Your grade is :O");
    break;
    case 8:printf("Your grade is :E");
    break;
    case 7:printf("Your grade is :A");
    break;
    }
    return 0;
}