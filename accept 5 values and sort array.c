#include <stdio.h>

int main() {
    int arr[5], choice, temp;

    printf("Enter 5 values: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("1 for Ascending, 2 for Descending: ");
    scanf("%d", &choice);

    for (int i = 0; i < 5 - 1; i++) {
        for (int j = 0; j < 5 - 1 - i; j++) {
            if ((choice == 1 && arr[j] > arr[j + 1]) ||
                (choice == 2 && arr[j] < arr[j + 1])) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}