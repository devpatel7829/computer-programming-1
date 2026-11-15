#include <stdio.h>

int main() {
    int num1;

    printf("Enter gross salary: ");
    scanf("%d", &num1);
    int allowance = 0.1 * num1;
    int deduction = 0.03 * num1;
    printf("The net salary is %d\n", num1 + allowance - deduction);

    return 0;
}