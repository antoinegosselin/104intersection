/*
** EPITECH PROJECT, 2018
** my_math
** File description:
** include functions for advanced math operations
*/

#ifndef MY_MATH_H
#define MY_MATH_H

#include "my.h"

/* epitech standard lib pool function */
int my_pow(int nb, int power);
int my_sqrt(int nb);

int my_max(int nb_arg, ...);
int my_min(int nb_arg, ...);

//  conversion functions  //
int my_atoi(char const *str);
char *my_itoa(int nb);

#endif //MY_MATH_H
