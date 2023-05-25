#include<stdio.h>

void main(){
    int arr[10], i, n, key, flag=0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &key);

    for(i=0; i<n; i++){
        if(arr[i] == key){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("The element is present at index %d\n", i);
        return;
    }
    
    printf("The element is not present in the array\n");
}