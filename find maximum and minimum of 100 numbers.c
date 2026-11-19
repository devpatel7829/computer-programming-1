#include <stdio.h>

int main() {
    int x, largest, smallest;

    printf("Enter 100 integers:\n");
    scanf("%d", &x);
    largest = smallest = x;

    for (int i = 1; i < 100; i++) {
        scanf("%d", &x);
        if (x > largest) {
            largest = x;
        }
        if (x < smallest) {
            smallest = x;
        }
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);
    return 0;
}