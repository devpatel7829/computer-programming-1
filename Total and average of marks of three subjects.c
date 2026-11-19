#include <stdio.h>

int main() {
    float m1, m2, m3, total, avg;

    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    avg = total / 3;

    printf("Total: %.2f\nAverage: %.2f\n", total, avg);
    return 0;
}