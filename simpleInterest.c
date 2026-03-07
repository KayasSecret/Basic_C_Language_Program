// Program to find out simple interest.

#include<stdio.h>

int main() {
    int pri_amount , time, rate;
    float Si_In;

    printf("Enter the Principal Amount - ");
    scanf("%d", &pri_amount);

    printf("Enter the Time - ");
    scanf("%d", &time);

    printf("Enter the Rate - ");
    scanf("%d", &rate);

    Si_In = (pri_amount * time * rate) / 100.0;

    printf("Your answer is - %.2f", Si_In);

    return 0;
}