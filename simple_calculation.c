#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("enter a");
    scanf("%d", &a);
    printf("enter b");
    scanf("%d", &b);
    c = a + b;
    d = a - b;
    e = a * b;
    printf("sum is (C) : %d\n", c);
    printf("difference is (D) : %d\n", d);
    printf("multiple is (E) : %d\n", e);

    // Example Output:
    // If a = 5 and b = 3
    // sum is (C) : 8
    // difference is (D) : 2
    // multiple is (E) : 15

    return 0;
}