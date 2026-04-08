#include <stdio.h>
#include <math.h>

int main() {
    int x;
    
    for (x = -10; x <= 10; x++) {
        int y = x * x;

        printf("x=%2d y=%3d  ", x, y);

        for (int i = 0; i < y; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}