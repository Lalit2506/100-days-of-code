#include <stdio.h>
#include <string.h>
#define PI 3.14159

#define AREA 1
#define PERIMETER 2

int main() {
    int choice;
    char shape[20];
    printf("Enter 1 for area or 2 for perimeter: ");
    scanf("%d", &choice);

    if (choice != AREA && choice != PERIMETER) {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Enter shape (circle, square, rectangle, triangle): ");
    scanf("%s", shape);

    if (strcmp(shape, "circle") == 0) {
        float r;
        printf("Enter radius: ");
        scanf("%f", &r);
        if (r <= 0) {
            printf("Invalid radius.\n");
            return 1;
        }
        if (choice == AREA)
            printf("Area = %.2f\n", PI * r * r);
        else
            printf("Perimeter = %.2f\n", 2 * PI * r);
    } else if (strcmp(shape, "square") == 0) {
        float s;
        printf("Enter side: ");
        scanf("%f", &s);
        if (s <= 0) {
            printf("Invalid side.\n");
            return 1;
        }
        if (choice == AREA)
            printf("Area = %.2f\n", s * s);
        else
            printf("Perimeter = %.2f\n", 4 * s);
    } else if (strcmp(shape, "rectangle") == 0) {
        float l, w;
        printf("Enter length and width: ");
        scanf("%f %f", &l, &w);
        if (l <= 0 || w <= 0) {
            printf("Invalid length or width.\n");
            return 1;
        }
        if (choice == AREA)
            printf("Area = %.2f\n", l * w);
        else
            printf("Perimeter = %.2f\n", 2 * (l + w));
    } else if (strcmp(shape, "triangle") == 0) {
        if (choice == AREA) {
            float base, h;
            printf("Enter base and height: ");
            scanf("%f %f", &base, &h);
            if (base <= 0 || h <= 0) {
                printf("Invalid base or height.\n");
                return 1;
            }
            printf("Area = %.2f\n", 0.5 * base * h);
        } else {
            float a, b, c;
            printf("Enter three sides: ");
            scanf("%f %f %f", &a, &b, &c);
            if (a <= 0 || b <= 0 || c <= 0) {
                printf("Invalid sides.\n");
                return 1;
            }
            printf("Perimeter = %.2f\n", a + b + c);
        }
    } else {
        printf("Invalid shape.\n");
    }
    return 0;
}