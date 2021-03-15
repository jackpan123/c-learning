//
// Created by JackPan on 2021/3/14.
//
#include <stdio.h>

int main() {

    float r;
    printf("Enter radius: ");
    scanf("%f", &r);
    float p = 3.14159f;
    float v = (4.0f / 3.0f) * p * r * r * r;
    printf("Volume is %.2f", v);
    return 0;
}
