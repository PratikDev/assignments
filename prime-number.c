#include<stdio.h>

int main(){
    int n, i, flag=0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(i=2; i<n; i++){
        if(n%i == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        printf("The number is not prime\n");
        return 0;
    }

    printf("The number is prime\n");
    return 0;
}