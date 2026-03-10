// Fibonacci series => 0, 1, 1, 2, 3, 5, 8, 13, ..........

#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++) {
        if(i == 1) {
            printf("%d, ", first);
        } 
        else if(i == 2) {
            printf("%d, ", second);
        } 
        else {
            next = first + second;
            printf("%d, ", next);
            first = second;
            second = next;
        }
    }

    return 0;
}
