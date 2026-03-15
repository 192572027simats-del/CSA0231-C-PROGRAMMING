#include <stdio.h>

int main() {
    int m, n, i;

    printf("Enter the number (m): ");
    scanf("%d", &m);

    printf("Enter the limit (n): ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", m);

    for(i = 1; i <= n; i++) {
        printf("%d x %d = %d\n", m, i, m * i);
    }

    return 0;
}
