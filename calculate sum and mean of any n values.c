#include <stdio.h>

int main() {
    int n;
    printf("Enter numbers to be calculated: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    float sum = 0.0f, x;
    for (int i = 0; i < n; i++) {
        scanf("%f", &x);
        sum += x;
    }

    float mean = sum / n;
    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f\n", mean);
    return 0;
}