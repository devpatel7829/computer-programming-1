#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter kilograms: ");
    scanf("%d %d", &num1, &num2);
    printf("The grams in %d kilograms is %d\n", num1, num1 * 1000);

    return 0;
}