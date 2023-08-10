#include<stdio.h>
void bubblesort(int arr[], int n ){
    int x,y,temp;
    for(x=0; x<n-1; x++){
        for(y=0; y<n-x-1; y++){
            if(arr[y]>arr[y+1]){
                temp=arr[y];
                arr[y]=arr[y+1];
                arr[y+1]=arr[y];
            }
        }
    }
}
int main(){
    int n,x,arr[50];
    printf("Enter the number of thew elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array");

    for(x=0; x<n; x++)
    scanf("%d", arr[x]);
    bubblesort(arr,n);

    printf("After implementation of the array the sorted form is: ");

    for(x=0; x<n; x++){
        printf("%d", arr[x]);
    }
    return 0;
}
