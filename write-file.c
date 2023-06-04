#include<stdio.h>

int main() {
    FILE *fp;
    fp = fopen("file.txt", "w");

    if(fp == NULL){
        printf("File not found\n");
        return 0;
    }

    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    fprintf(fp, "%s", str);

    fclose(fp);
    
    return 0;
}