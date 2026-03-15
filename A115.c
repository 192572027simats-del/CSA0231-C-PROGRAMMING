#include <stdio.h>

int main() {
    float principal, years, rate, interest;
    char senior;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the number of years: ");
    scanf("%f", &years);

    printf("Is customer senior citizen (y/n): ");
    scanf(" %c", &senior);

    if(senior == 'y' || senior == 'Y')
        rate = 12;
    else
        rate = 10;

    interest = (principal * rate * years) / 100;

    printf("Interest: %.0f\n", interest);

    return 0;
}
