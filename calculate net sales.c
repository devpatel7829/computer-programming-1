#include <stdio.h>

int main() {
    int num1;

    printf("Enter gross sales: ");
    scanf("%d", &num1);
    int discount = 0.1 * num1;
    printf("The net sales is %d\n", num1 + discount);

    return 0;
}