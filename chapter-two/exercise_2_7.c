//
// Created by JackPan on 2021/3/14.
//
#include <stdio.h>
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1

int main() {

    int twenty, ten, five, one;
    int x;
    printf("Enter a dollar amount: ");
    scanf("%d", &x);

    twenty = x / TWENTY;
    x = x - twenty * TWENTY;

    ten = x / TEN;
    x = x - ten * TEN;

    five = x / FIVE;
    x = x - five * FIVE;

    one = x / ONE;

    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);
    return 0;
}
