#include <stdio.h>

int main() {
    int x, pos = 0, neg = 0, zero = 0;

    printf("Enter 200 integers:\n");
    for (int i = 0; i < 200; i++) {
        scanf("%d", &x);
        if (x > 0) {
            pos++;
        } else if (x < 0) {
            neg++;
        } else {
            zero++;
        }
    }

    printf("Positive = %d\n", pos);
    printf("Negative = %d\n", neg);
    printf("Zero = %d\n", zero);
    return 0;
}