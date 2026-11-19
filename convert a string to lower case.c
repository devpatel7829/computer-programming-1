#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    strlwr(str);

    printf("Lowercase: %s\n", str);
    return 0;
}