#include <stdio.h>

int main() {
    char code;
    int boys = 0, girls = 0;

    printf("Enter sex code for 50 students (B/G or M/F):\n");
    for (int i = 0; i < 50; i++) {
        scanf(" %c", &code);

        if (code == 'B' || code == 'b' || code == 'M' || code == 'm') {
            boys++;
        } else if (code == 'G' || code == 'g' || code == 'F' || code == 'f') {
            girls++;
        } else {
            printf("Invalid code '%c' skipped.\n", code);
        }
    }

    printf("Boys = %d\n", boys);
    printf("Girls = %d\n", girls);
    return 0;
}