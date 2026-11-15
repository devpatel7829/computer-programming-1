#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter grams: ");
    scanf("%d %d", &num1, &num2);
    printf("The kilograms in %d grams is %d\n", num1, num1 / 1000);

    return 0;
}