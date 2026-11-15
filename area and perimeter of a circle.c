#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter radius of circle: ");
    scanf("%d", &num1);
    printf("The area of the circle is %d\n", 3.14 * num1 * num1);
    printf("The perimeter of the circle is %d\n", 2 * 3.14 * num1);

    return 0;
}