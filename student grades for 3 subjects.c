#include <stdio.h>

int main() {
    float m1, m2, m3, avg;

    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &m1, &m2, &m3);

    if (m1 < 35 || m2 < 35 || m3 < 35) {
        printf("Fail\n");
        return 0;
    }

    avg = (m1 + m2 + m3) / 3;

    if (avg >= 70) {
        printf("Distinction\n");
    } else if (avg >= 60) {
        printf("First\n");
    } else if (avg >= 50) {
        printf("Second\n");
    } else if (avg >= 35) {
        printf("Third Class\n");
    } else {
        printf("Fail\n");
    }

    return 0;
}