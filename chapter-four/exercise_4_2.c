//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a three-digit number:");
    scanf("%d", &num);
    printf("The reversal is:%d", ((num % 100) % 10) * 100 + num / 100 + (((num / 10) % 10) * 10));
    return 0;
}
