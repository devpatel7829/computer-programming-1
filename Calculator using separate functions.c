#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }

int main() {
    float a, b;
    char op;
    printf("Enter expression (a + b): ");
    scanf("%f %c %f", &a, &op, &b);

    if (op == '+') printf("Result: %.2f\n", add(a, b));
    else if (op == '-') printf("Result: %.2f\n", subtract(a, b));
    else if (op == '*') printf("Result: %.2f\n", multiply(a, b));
    else if (op == '/') {
        if (b != 0) printf("Result: %.2f\n", divide(a, b));
        else printf("Cannot divide by zero\n");
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}