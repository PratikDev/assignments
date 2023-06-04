#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    char uppercaseCh = toupper(ch);

    printf("Original character: %c\n", ch);
    printf("Uppercase character: %c\n", uppercaseCh);

    return 0;
}
