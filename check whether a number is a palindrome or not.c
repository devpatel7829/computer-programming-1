#include <stdio.h>
int main() {
int num, digit = 0, reverse = 0;
printf("Enter a number: ");
scanf("%d", &num);
while (num > 0) {
   digit = num % 10;
   reverse = reverse * 10 + digit;
   num /= 10;
}
printf("Reversed number: %d\n", reverse);
if (reverse == num) {
    printf("The number is a palindrome.\n");
} else {
    printf("The number is not a palindrome.\n");
}
return 0;
}