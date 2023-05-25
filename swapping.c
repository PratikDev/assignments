#include<stdio.h>

void main(){
    int arr[10], i, j, temp, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the indices of the elements to be swapped: ");
    scanf("%d %d", &i, &j);

    arr[i] = arr[i] ^ arr[j];
    arr[j] = arr[i] ^ arr[j];
    arr[i] = arr[i] ^ arr[j];

    printf("The swapped array is: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
}