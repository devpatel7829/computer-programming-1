 #include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter dollars: ");
    scanf("%d %d", &num1, &num2);
    printf("The rupees in %d dollars is %d\n", num1, num1 * 48);

    return 0;
}