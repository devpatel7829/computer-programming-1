#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter minutes: ");
    scanf("%d %d", &num1, &num2);
    printf("The hours in %d minutes is %d\n", num1, num1 / 60);

    return 0;
}