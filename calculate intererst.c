#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter principal: ");
    scanf("%d", &num1);
    printf("Enter rate: ");
    scanf("%d", &num2);
    printf("enter time: ");
    scanf("%d", &num3);
    printf("The simple interest for principal %d and rate %d is %d\n", num1, num2, (num1 * num2 * num3) / 100);

    return 0;
}