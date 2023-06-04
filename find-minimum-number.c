#include<stdio.h>

int main() {
    int n, i, min, num;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    scanf("%d", &min);

    for(i=1; i<n; i++) {
        scanf("%d", &num);
        if(num < min){
            min = num;
        }
    }

    printf("The minimum number is: %d\n", min);
    return 0;
}