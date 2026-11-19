#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[100];

    printf("Enter first string: ");
    scanf("%99s", s1);
    printf("Enter second string: ");
    scanf("%99s", s2);

    strcat(s1, s2);

    printf("Concatenated: %s\n", s1);
    return 0;
}