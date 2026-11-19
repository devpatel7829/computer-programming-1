#include <stdio.h>

int main() {
    for (int i = 1, j = 5; i <= 3; i++, j--) {
        printf("%d%d %d%d ", i, j, i, j);
    }
    printf("\n");
    return 0;
}