#include<stdio.h>

void main()
{
    int arr[100], size, index, element;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index at which you want to insert the element: ");
    scanf("%d", &index);

    printf("Enter the element you want to insert: ");
    scanf("%d", &element);

    for(int i=size-1; i>=index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    size++;

    printf("The new array is: ");
    for(int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}