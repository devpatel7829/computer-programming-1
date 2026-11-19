#include <stdio.h>

int main() {
    int n, sq, temp, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    sq = n * n;
    temp = n;

    while (temp > 0) {
        place *= 10;
        temp /= 10;
    }

    if (sq % place == n) {
        printf("%d is an automorphic number.\n", n);
    } else {
        printf("%d is not an automorphic number.\n", n);
    }

    return 0;
}