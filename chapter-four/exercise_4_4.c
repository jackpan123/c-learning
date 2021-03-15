//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>

int main(void)
{
    int num;
    int multiple = 1;
    int result = 0;
    printf("Enter a number between 0 and 32767:");
    scanf("%d", &num);

    while (num != 0) {
        result += (num % 8) * multiple;
        num = num / 8;
        multiple *= 10;
    }

    printf("In octal, your number is:%.5d", result);
    return 0;

}
