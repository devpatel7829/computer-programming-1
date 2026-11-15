#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter hours: ");
    scanf("%d %d", &num1, &num2);
    printf("The minutes in %d hours is %d\n", num1, num1 * 60);             
    return 0;
}