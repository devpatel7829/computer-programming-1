#include <stdio.h>
int main() {
int num, digit;
printf("Enter a number: ");
scanf("%d", &num);
digit = 0;
while (num > 0) {
    digit++;
    num /= 10;
}
printf("Number of digits: %d\n", digit);
return 0;
}