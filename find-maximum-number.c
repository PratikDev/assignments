#include<stdio.h>

int main() {
    int n, i, max=0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    printf("The maximum number is: %d\n", max);
    return 0;
}