#include<stdio.h>

int main() {
    int base, height;
    float area;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the height: ");
    scanf("%d", &height);

    area = 0.5 * base * height;

    printf("The area of the triangle is: %f\n", area);
    return 0;
}