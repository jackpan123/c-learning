//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>
int main(void)
{
    float dollars, tax;
    printf("Enter your income:");
    scanf("%f", &dollars);
    if (dollars < 750.00f) {
        tax = dollars * .01f;
    } else if (dollars < 2250.00f) {
        tax = 7.50f + (dollars - 750.00f) * .02f;
    } else if (dollars < 3750.00f) {
        tax = 37.50f + (dollars - 2250.00f) * .03f;
    } else if (dollars < 5250.00f) {
        tax = 82.50f + (dollars - 3750.00f) * .04f;
    } else if (dollars < 7000.00f) {
        tax = 142.50f + (dollars - 5250.00f) * .05f;
    } else {
        tax = 230.00f + (dollars - 7000.00f) * .06f;
    }

    printf("Your tax is: $%.2f", tax);
    return 0;
}
