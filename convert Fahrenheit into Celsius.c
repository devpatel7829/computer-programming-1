#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter Fahrenheit: ");
    scanf("%d %d", &num1, &num2);
    printf("The Celsius in %d Fahrenheit is %d\n", num1, (num1 - 32) * 5/9);

    return 0;
}