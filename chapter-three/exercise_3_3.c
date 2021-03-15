//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>

int main(void)
{

    int gs1, group, pc, it, cd;
    printf("Enter ISBN:");
    scanf("%d-%d-%d-%d-%d", &gs1, &group, &pc, &it, &cd);
    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", pc);
    printf("Item number: %d\n", it);
    printf("Check digit: %d\n", cd);
    return 0;
}
