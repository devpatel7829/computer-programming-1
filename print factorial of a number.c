#include <stdio.h>

int main() {
    int fact = 1;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("The factorial of %d is %d\n", n, fact);

    return 0;
}