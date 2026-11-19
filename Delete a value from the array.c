#include <stdio.h>

int main() {
    int a[100], n, val, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter value to delete: ");
    scanf("%d", &val);

    for (int i = 0; i < n; i++) {
        if (a[i] == val) {
            for (int j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Value not found.\n");
    }

    printf("Updated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}