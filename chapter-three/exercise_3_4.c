//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>

int main(void)
{

    int areaNum, prefix, suffix;
    printf("Enter phone number [(xxx) xxx-xxxx]:");
    scanf("(%d) %d-%d", &areaNum, &prefix, &suffix);
    printf("You entered %d.%d.%d", areaNum, prefix, suffix);
    return 0;
}
