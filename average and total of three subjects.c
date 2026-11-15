#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter marks in physics: ");
    scanf("%d", &num1);
    printf("Enter marks in chemistry: ");
    scanf("%d", &num2);
    printf("Enter marks in mathematics: ");
    int num3;
    scanf("%d", &num3);
    int sum = num1 + num2 + num3;
    float average = (float)sum / 3;
    printf("The sum of the marks is %d\n", sum);
    printf("The average of the marks is %.2f\n", average);

    return 0;
}