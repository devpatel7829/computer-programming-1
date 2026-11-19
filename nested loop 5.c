#include <stdio.h>

int main() {
    for (int i = 1, j = 5; i <= 5; i++, j--) {
        printf("%d%d ", i, j);
    }
    printf("\n");
    return 0;
}