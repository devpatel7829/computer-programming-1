#include <stdio.h>

int main() {
    int a[100], n, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter value to insert at beginning: ");
    scanf("%d", &val);

    for (int i = n; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = val;
    n++;

    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}