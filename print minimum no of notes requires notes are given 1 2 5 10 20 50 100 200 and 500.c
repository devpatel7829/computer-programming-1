#include <stdio.h>

int main() {
    int amount, count = 0;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    printf("Enter amount: ");
    scanf("%d", &amount);

    for (int i = 0; i < 9; i++) {
        if (amount >= notes[i]) {
            int n = amount / notes[i];
            printf("%d: %d\n", notes[i], n);
            count += n;
            amount %= notes[i];
        }
    }

    printf("Minimum notes: %d\n", count);
    return 0;
}