#include<stdio.h>

int main() {
    int roll;
    printf("Enter the roll number: ");
    scanf("%d", &roll);

    int group = (roll-1)/11;

    switch(group){
        case 1:
            printf("You are in group A\n");
            break;
        case 2:
            printf("You are in group B\n");
            break;
        case 3:
            printf("You are in group C\n");
            break;
        case 4:
            printf("You are in group D\n");
            break;
        case 5:
            printf("You are in group E\n");
            break;
        default:
            printf("You are not in any group\n");
    }
}