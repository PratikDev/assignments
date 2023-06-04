#include<stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("file.txt", "r");

    if(fp == NULL){
        printf("File not found\n");
        return 0;
    }

    ch = fgetc(fp);

    printf("%c\n", ch);

    fclose(fp);

    return 0;
}