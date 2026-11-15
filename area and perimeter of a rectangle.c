#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter length of rectangle: ");
    scanf("%d", &num1);
    printf("Enter width of rectangle: ");
    scanf("%d", &num2);
    printf("The area of the rectangle is %d\n", num1 * num2);
    printf("The perimeter of the rectangle is %d\n", 2 * (num1 + num2));

    return 0;
}