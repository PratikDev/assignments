#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    char lowercaseCh = tolower(ch);

    printf("Original character: %c\n", ch);
    printf("Lowercase character: %c\n", lowercaseCh);

    return 0;
}