#include <stdio.h>

int main() {
    int sum = 0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("The sum of the first %d natural numbers is %d\n", n, sum);

    return 0;
}