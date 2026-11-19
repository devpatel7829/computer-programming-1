#include <stdio.h>

void printAsc(int curr, int n) {
    if (curr > n) return;
    printf("%d ", curr);
    printAsc(curr + 1, n);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printAsc(1, n);
    printf("\n");
    return 0;
}