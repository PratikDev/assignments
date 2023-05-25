#include<stdio.h>

void main(){
    int n, i, key, low, high, mid, flag = 0;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high){
        mid = low + (((key - arr[low]) * (high - low)) / (arr[high] - arr[low]));

        if(arr[mid] == key){
            flag = 1;
            break;
        }

        else if(arr[mid] < key){
            low = mid + 1;
        }

        else{
            high = mid - 1;
        }
    }

    if(flag == 1){
        printf("Element found at index %d\n", mid);
        return;
    }
    
    printf("Element not found\n");
}