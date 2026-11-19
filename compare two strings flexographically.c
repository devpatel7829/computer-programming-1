#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int cmp;

    printf("Enter first string: ");
    scanf("%99s", s1);
    printf("Enter second string: ");
    scanf("%99s", s2);

    cmp = strcmp(s1, s2);

    if (cmp < 0) {
        printf("\"%s\" is lower than \"%s\"\n", s1, s2);
    } else if (cmp > 0) {
        printf("\"%s\" is higher than \"%s\"\n", s1, s2);
    } else {
        printf("Both strings are equal\n");
    }

    return 0;
}