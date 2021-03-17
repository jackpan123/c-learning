//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>
int main(void)
{
    int seaMile;
    printf("Enter a searMile:");
    scanf("%d", &seaMile);
    if (seaMile < 1) {
        printf("Calm\n");
    } else if (seaMile < 4) {
        printf("Light air\n");
    } else if (seaMile < 28) {
        printf("Breeze\n");
    } else if (seaMile < 48) {
        printf("Gale\n");
    } else if (seaMile < 64) {
        printf("Storm\n");
    } else {
        printf("Hurricane\n");
    }
    return 0;
}
