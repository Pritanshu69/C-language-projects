#include<stdio.h>

int main(){
    int n,c,search,first,last,middle,array[100];

    printf("Enter the number of elements\n");
    scanf("%d", &n);

    printf("Enter %d integars\n", n);

    for(c=0 ; c<n ; c++)
    scanf("%d", &array[c]);

    printf("Enter the element for search\n");
    scanf("%d", &search);

    first = 0;
    last = n-1;
    middle = (first+last)/2;

    while(first <= last){
        if(array[middle] < search)
        first = middle+1;
        else if(array[middle] == search){
            printf("%d is found at the location %d", search, middle+1);
            break;
        }
        else
        last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last){
        printf("%d not found in the list\n", search);
    }
    return 0;
}