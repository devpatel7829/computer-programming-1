#include <stdio.h>

int main() {
    int a[10], n, dir;

    printf("Enter 10 elements: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter positions to shift: ");
    scanf("%d", &n);
    printf("1 for Left, 2 for Right: ");
    scanf("%d", &dir);

    if (n > 10) {
        n = 10;
    }

    if (dir == 1) {
        for (int i = 0; i < 10 - n; i++) {
            a[i] = a[i + n];
        }
        for (int i = 10 - n; i < 10; i++) {
            a[i] = 0;
        }
    } else if (dir == 2) {
        for (int i = 9; i >= n; i--) {
            a[i] = a[i - n];
        }
        for (int i = 0; i < n; i++) {
            a[i] = 0;
        }
    }

    printf("Shifted array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}