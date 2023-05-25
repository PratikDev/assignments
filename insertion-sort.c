#include<stdio.h>

void main(){
    int n, i, j, temp;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < n; i++){
        temp = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }

    printf("The sorted array is: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
        
    printf("\n");
}