#include <stdio.h>

int main() {
    int a, b;
    char operator;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); // space before %c skips newline
    if (operator == '+') {
        printf("Result: %d\n", a + b);
    } else if (operator == '-') {
        printf("Result: %d\n", a - b);
    } else if (operator == '*') {
        printf("Result: %d\n", a * b);
    } else if (operator == '/') {
        if (b != 0) {
            printf("Result: %f\n", (float)a / b);
        } else {
            printf("Error: Division by zero.\n");
        }
    } else {
        printf("Invalid operator.\n");
    }
    return 0;
}

/*
Output Examples:
Addition: Enter a: 5 Enter b: 3 Enter operator (+, -, *, /): + Result: 8
Subtraction: Enter a: 5 Enter b: 3 Enter operator (+, -, *, /): - Result: 2
Multiplication: Enter a: 5 Enter b: 3 Enter operator (+, -, *, /): * Result: 15
Division: Enter a: 5 Enter b: 2 Enter operator (+, -, *, /): / Result: 2.500000
*/