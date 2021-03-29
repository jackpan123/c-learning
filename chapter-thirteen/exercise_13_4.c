//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    int i;
    for (i = argc - 1; i > 0; ++i) {
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}

