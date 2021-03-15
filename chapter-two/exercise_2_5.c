//
// Created by JackPan on 2021/3/14.
//
#include <stdio.h>

int main() {

    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    int r = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
    printf("Result: %d", r);
    return 0;
}
