//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>
int main(void)
{
    float commission, value, number, price;
    printf("Enter number of trade:");
    scanf("%f", &number);
    printf("Enter price of trade:");
    scanf("%f", &price);
    value = number * price;
    if (value < 2500.00f) {
        commission = 30.00f + .17f * value;
    } else if (value < 6250.00f) {
        commission = 56.00f + .0066f * value;
    } else if (value < 20000.00f) {
        commission = 76.00f + .0034f * value;
    } else if (value < 50000.00f) {
        commission = 100.00f + .0022f * value;
    } else if (value < 500000.00f) {
        commission = 155.00f + .0011f * value;
    } else {
        commission = 255.00f + .0009f * value;
    }

    if (commission < 39.00f) {
        commission = 39.00f;
    }

    float rival;
    if (number < 2000.0f) {
        rival = 33.3f * number;
    } else {
        rival = 33.2f * number;
    }

    printf("Commission: $%.2f\n", commission);
    printf("Rival: $%.2f\n", rival);
    return 0;
}
