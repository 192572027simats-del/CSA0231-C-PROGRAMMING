#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *a, int l, int r) {
    int i;
    if (l == r)
        printf("%s\n", a);
    else {
        for (i = l; i <= r; i++) {
            swap((a+l), (a+i));
            permute(a, l+1, r);
            swap((a+l), (a+i)); // backtrack
        }
    }
}

int main() {
    char num[20];

    printf("Enter a number: ");
    scanf("%s", num);

    int n = strlen(num);

    printf("Permutations are:\n");
    permute(num, 0, n-1);

    return 0;
}
