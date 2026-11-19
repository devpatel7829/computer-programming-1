#include <stdio.h>

int main() {
    int a[100], n, val, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter value and position (1 to %d): ", n + 1);
    scanf("%d %d", &val, &pos);

    for (int i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = val;
    n++;

    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}