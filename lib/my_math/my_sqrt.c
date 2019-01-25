/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** compute an sqrt operation
*/

#include "my.h"

int my_compute_square_root(int nb)
{
    double x = 1;
    double nb_conv = nb;

    if (nb <= 0)
        return 0;

    for (int i = 0; i < 2000; i++){
        x = 0.5 * (x + (nb_conv/x));
    }
    return x;
}
