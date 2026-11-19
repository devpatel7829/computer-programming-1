#include <stdio.h>

int main() {
    float gross, allowances = 0, deductions = 0, net;

    printf("Enter gross salary: ");
    scanf("%f", &gross);

    if (gross > 10000) {
        allowances = 0.10 * gross;
        deductions = 0.03 * gross;
    } else if (gross > 5000) {
        allowances = 0.07 * gross;
        deductions = 0.02 * gross;
    }

    net = gross + allowances - deductions;

    printf("Net salary: %.2f\n", net);
    return 0;
}