/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** parsing
*/

#include "parsing.h"

int *parser(char **argv)
{
    int *arr = malloc(sizeof(int) * INT_ARR_SIZE);

    for (int i = 1; i < (INT_ARR_SIZE + 1); i++) {
        if (my_str_isint(argv[i]) == FALSE) {
            free(arr);
            exit(84);
        }
        arr[i - 1] = atoi(argv[i]);
    }
    if (arr[OPT] != 1 && arr[OPT] != 2 && arr[OPT] != 3) {
        free(arr);
        exit(84);
    }
    if (arr[P] < 0) {
        free(arr);
        exit(84);
    }
    return (arr);
}