#include <stdio.h>

int main() {
    for (int n = 2; n <= 500; n++) {
        int is_prime = 1;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d ", n);
        }
    }

    printf("\n");
    return 0;
}