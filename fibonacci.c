#include<stdio.h>

int main() {
    int n, i, a=0, b=1, c;

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("The fibonacci series is: ");
    printf("%d %d ", a, b);

    for(i=0; i<n-2; i++){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}