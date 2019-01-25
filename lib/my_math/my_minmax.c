/*
** EPITECH PROJECT, 2018
** my_minmax
** File description:
** my_minmax
*/

#include "my.h"

int my_max(int nb_arg, ...)
{
    va_list ap;
    int max;

    va_start(ap, nb_arg);
    max = va_arg(ap, int);
    for (int i = 0; i < nb_arg; i++){
        int nb = va_arg(ap, int);
        max = (max < nb) ? nb : max;
    }
    va_end(ap);
    return (max);
}

int my_min(int nb_arg, ...)
{
    va_list ap;
    int min;

    va_start(ap, nb_arg);
    min = va_arg(ap, int);
    for (int i = 0; i < nb_arg; i++){
        int nb = va_arg(ap, int);
        min = (min > nb) ? nb : min;
    }
    va_end(ap);
    return (min);
}