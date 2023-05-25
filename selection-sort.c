#include<stdio.h>

void main(){
    int arr[100], n, i, j, temp, min, min_index;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n-1; i++){
        min = arr[i];
        min_index = i;

        for(j=i+1; j<n; j++){
            if(arr[j] < min){
                min = arr[j];
                min_index = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    printf("The sorted array is: ");
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
}