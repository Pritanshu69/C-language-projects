#include<stdio.h>

int main(){

    int x , y , num , temp , arr[50];
    printf("Enter thre number of elements of the array\n");
    scanf("%d", &num);

    printf("Enter the elements of the array\n");

    for(x=0; x<num; x++)
    scanf("%d", &arr[x]);

    for(x=0; x<num-1; x++){
        for(y=0; y<num-x-1; y++){
            if(arr[y]>arr[y+1]){
                temp=arr[y];
                arr[y]=arr[y+1];
                arr[y+1]=temp;
            }
        }
    }
    printf("After implemantation of Bubble sort the sorted arrat is:\n");
    for(x=0; x<num; x++){
        printf("%d", arr[x]);
    }
    return 0;
}