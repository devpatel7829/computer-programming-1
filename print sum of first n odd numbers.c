#include <stdio.h>

int main() {
    int sum = 0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("The sum of the first %d odd numbers is %d\n", n, sum);

    return 0;
}