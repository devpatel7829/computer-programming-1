#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter Celsius: ");
    scanf("%d %d", &num1, &num2);
    printf("The Fahrenheit in %d Celsius is %d\n", num1, (num1 * 9/5) + 32);

    return 0;
}