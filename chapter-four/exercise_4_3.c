//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>

int main(void)
{
    int n1, n2, n3;
    printf("Enter a three-digit number:");
    scanf("%1d%1d%1d", &n1, &n2, &n3);
    printf("The reversal is:%d", n1 + n2 * 10 + n3 * 100);
    return 0;
}
