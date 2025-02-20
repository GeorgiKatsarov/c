#include <stdio.h>

int main() {
    float a, b;
    char operation;

    printf("a = ");
    scanf("%f", &a);
    printf("\n");

    printf("b = ");
        scanf("%f", &b);
    printf("\n");

    printf("operation (+, -, /, *): ");
    scanf(" %c", &operation);
    printf("\n");

    switch (operation) {
        case '+':
            printf("Result: %.2f\n", a + b);
            break;
        case '-':
            printf("Result: %.2f\n", a - b);
            break;
        case '*':
            printf("Result: %.2f\n", a * b);
            break;
        case '/':
            if (b == 0.0f) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                printf("Result: %.2f\n", a / b);
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
            break;
    }

    return 0;
}
