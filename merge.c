#include<stdio.h>

void main(){
    
    int arr1[100], arr2[100], arr3[200], n1, n2, i, j, k;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of the first array: ");
    for(i=0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of the second array: ");
    for(i=0; i<n2; i++){
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;
    k = 0;

    while(i<n1 && j<n2){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        
        else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    while(i<n1){
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    while(j<n2){
        arr3[k] = arr2[j];
        j++;
        k++;
    }

    printf("The merged array is: ");
    for(i=0; i<n1+n2; i++){
        printf("%d ", arr3[i]);
    }

    printf("\n");
}