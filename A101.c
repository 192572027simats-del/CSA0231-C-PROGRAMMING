#include <stdio.h>
#include <math.h>

int main() {
    float x, n, result;
    int choice;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the value of n: ");
    scanf("%f", &n);

    printf("\nChoose the operation:\n");
    printf("1. Add (x + n)\n");
    printf("2. Subtract (x - n)\n");
    printf("3. Multiply (x * n)\n");
    printf("4. Divide (x / n)\n");
    printf("5. Power (x^n)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = x + n;
            printf("Result = %.2f\n", result);
            break;

        case 2:
            result = x - n;
            printf("Result = %.2f\n", result);
            break;

        case 3:
            result = x * n;
            printf("Result = %.2f\n", result);
            break;

        case 4:
            if(n != 0)
                printf("Result = %.2f\n", x / n);
            else
                printf("Division by zero is not allowed\n");
            break;

        case 5:
            result = pow(x, n);
            printf("Result = %.2f\n", result);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
