//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a two-digit number:");
    scanf("%d", &num);
    printf("The reversal is:%d", (num % 10) * 10 + num / 10);
    return 0;
}
