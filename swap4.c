// Call By Reference
// Pass By Reference 
// Using Pointers

#include<stdio.h>

int swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    printf("Before Swaping : \n");
    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After Swaping : \n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}