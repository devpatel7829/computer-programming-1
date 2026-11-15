 #include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter rupees: ");
    scanf("%d %d", &num1, &num2);
    printf("The dollars in %d rupees is %d\n", num1, num1 / 48);

    return 0;
}