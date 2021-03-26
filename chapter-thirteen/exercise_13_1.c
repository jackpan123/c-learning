//
// Created by JackPan on 2021/3/15.
//
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 20
int read_line(char str[], int n);
int main(void)
{
    char current_str[MAX_LENGTH + 1];
    char smallest_word[MAX_LENGTH + 1];
    char largest_word[MAX_LENGTH + 1];

    printf("Enter word: ");
    read_line(current_str, MAX_LENGTH);
    strcpy(smallest_word, strcpy(largest_word, current_str));
    while (strlen(current_str) != 4) {
        printf("Enter word: ");
        read_line(current_str, MAX_LENGTH);
        if (strcmp(current_str, largest_word) > 0) {
            strcpy(largest_word, current_str);
        }

        if (strcmp(current_str, smallest_word) < 0) {
            strcpy(smallest_word, current_str);
        }
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);
    return 0;
}

int read_line(char str[], int n) {
    int ch, i=0;
    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }

    str[i] = '\0';
    return i;
}
