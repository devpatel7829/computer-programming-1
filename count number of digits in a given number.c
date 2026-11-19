#include <stdio.h>
int main() {
int num, digit = 0;
printf("Enter a number: ");
scanf("%d", &num);
while (num > 0) {
   digit++;
   num /= 10;
}
printf("Number of digits: %d\n", digit);
return 0;
}