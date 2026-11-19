#include <stdio.h>

int main() {
    int a[10], visited[10] = {0};

    printf("Enter 10 elements: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (visited[i]) {
            continue;
        }
        int count = 1;
        for (int j = i + 1; j < 10; j++) {
            if (a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d times\n", a[i], count);
    }

    return 0;
}