#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    strrev(str);

    printf("Reversed: %s\n", str);
    return 0;
}