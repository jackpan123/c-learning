//
// Created by JackPan on 2021/3/15.
//
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define NUM_PLANETS 9
int string_compare(char* s1, char* s2);
int main(int argc, char* argv[])
{
    char* planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};
    int i, j;

    for (i = 0; i < argc ; ++i) {
        for (int j = 0; j < NUM_PLANETS; ++j) {
            if (string_compare(argv[i], planets[j])) {
                printf("%s is planet %d\n", argv[i], j + 1);
                break;
            }
        }

        if (j == NUM_PLANETS) {
            printf("%s is not a planet\n", argv[i]);
        }
    }
    return 0;
}

int string_compare(char* s1, char* s2) {
    int i;

    for (i = 0; toupper(s1[i]) == toupper(s2[i]); i++)
        if (s1[i] == '\0')
            return 1;

    return 0;
}
