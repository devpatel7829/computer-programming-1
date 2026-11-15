#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter side of triangle: ");
    scanf("%d", &num1);
    printf("The area of the triangle is %d\n", num1 * num1 * 1.73 / 4);    
    printf("The perimeter of the triangle is %d\n", 3 * num1);

    return 0;
}