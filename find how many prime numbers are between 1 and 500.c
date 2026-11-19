#include <stdio.h>

int main() {
    int count = 0;

    for (int n = 2; n <= 500; n++) {
        int is_prime = 1;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            count++;
        }
    }

    printf("Total prime numbers = %d\n", count);
    return 0;
}