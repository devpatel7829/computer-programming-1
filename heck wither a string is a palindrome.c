#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, j, is_pal = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            is_pal = 0;
            break;
        }
        i++;
        j--;
    }

    if (is_pal) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}