#include<stdio.h>

void main(){
    int arr[10], i, n, key, flag=0, low, high, mid;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    low = 0;
    high = n-1;

    while(low <= high){
        mid = (low + high)/2;

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
        printf("The element is present at index %d\n", mid);
        return;
    }
    
    printf("The element is not present in the array\n");
}