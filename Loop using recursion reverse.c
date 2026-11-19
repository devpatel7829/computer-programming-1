#include <stdio.h>

void printDesc(int n) {
    if (n < 1) return;
    printf("%d ", n);
    printDesc(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printDesc(n);
    printf("\n");
    return 0;
}