// swap two numbers without using third variable
// Logical Bit Operator

#include<stdio.h>

int main() {
    int x = 10;
    int y = 20;

    printf("Before Swaping : \n");
    printf("x = %d, y = %d\n", x, y);

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("After Swaping : \n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}