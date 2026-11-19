#include <stdio.h>

int power(int a, int b) {
    int res = 1;
    for (int i = 0; i < b; i++) {
        res *= a;
    }
    return res;
}

int main() {
    int a, b;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d\n", power(a, b));
    return 0;
}