//
// Created by JackPan on 2021/3/14.
//
#include <stdio.h>

int main() {

    float s;
    printf("Enter an amount: ");
    scanf("%f", &s);
    float r = s + (s * 0.05f);
    printf("With tax added: $%.2f", r);
    return 0;
}
