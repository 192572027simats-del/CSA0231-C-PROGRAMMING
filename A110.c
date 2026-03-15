#include <stdio.h>

int main() {
    int lines, i, j;

    printf("Enter number of lines: ");
    scanf("%d", &lines);

    for(i = 1; i <= lines; i++) {
        for(j = 1; j <= i; j++) {
            printf("0.%d ", i);
        }
        printf("\n");
    }

    return 0;
}
