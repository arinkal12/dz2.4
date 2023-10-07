#include <stdio.h>
int main() {
    int a, b, c;
    printf("enter the lengths of the sides of the triangle  ");
    scanf_s("%d %d %d", &a, &b, &c);
    if (a == b && b == c) {
        printf("\n equilateral triangle");
    }
    else if (a == b || c == a || b == c)
    {
        printf("\n isosceles triangle");
    }
    else {
        printf("\n the versatile triangle");
    }

    return 0;
}