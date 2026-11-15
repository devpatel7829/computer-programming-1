#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter bytes: ");
    scanf("%d %d", &num1, &num2);
    printf("The kilobytes in %d bytes is %d\n", num1, num1 / 1024);
    printf("The megabytes in %d bytes is %d\n", num1, num1 / (1024 * 1024));
    printf("The gigabytes in %d bytes is %d\n", num1, num1 / (1024 * 1024 * 1024));

    return 0;
}