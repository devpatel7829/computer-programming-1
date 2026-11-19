#include <stdio.h>

int main() {
    char str[100];
    int i = 0, a = 0, e = 0, i_cnt = 0, o = 0, u = 0;

    printf("Enter a string: ");
    scanf("%99s", str);

    while (str[i] != '\0') {
        if (str[i] == 'a' || str[i] == 'A') {
            a++;
        } else if (str[i] == 'e' || str[i] == 'E') {
            e++;
        } else if (str[i] == 'i' || str[i] == 'I') {
            i_cnt++;
        } else if (str[i] == 'o' || str[i] == 'O') {
            o++;
        } else if (str[i] == 'u' || str[i] == 'U') {
            u++;
        }
        i++;
    }

    printf("a: %d\ne: %d\ni: %d\no: %d\nu: %d\n", a, e, i_cnt, o, u);
    return 0;
}