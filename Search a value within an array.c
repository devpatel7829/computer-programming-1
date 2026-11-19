#include <stdio.h>

int main() {
    int a[100], n, val, pos = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter value to search: ");
    scanf("%d", &val);

    for (int i = 0; i < n; i++) {
        if (a[i] == val) {
            pos = i + 1;
            break;
        }
    }

    if (pos != -1) {
        printf("Found at position %d\n", pos);
    } else {
        printf("Not found\n");
    }

    return 0;
}