#include<stdio.h>

void main(){
    int arr[100], size, index;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index at which you want to delete the element: ");
    scanf("%d", &index);

    for(int i=index; i<size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    size--;

    printf("The new array is: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}