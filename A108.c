#include <stdio.h>

int main() {
    int P, Q, R, i;

    printf("Enter the starting number (P): ");
    scanf("%d", &P);

    printf("Enter the ending number (Q): ");
    scanf("%d", &Q);

    printf("Enter the number to skip (R): ");
    scanf("%d", &R);

    printf("Numbers are = ");

    for(i = P; i <= Q; i++) {
        if(i == R) {
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}
