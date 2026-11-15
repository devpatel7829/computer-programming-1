#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter side of square: ");
    scanf("%d", &num1);
    printf("The area of the square is %d\n", num1 * num1);
    printf("The perimeter of the square is %d\n", 4 * num1);

    return 0;
}