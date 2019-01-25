/*
** EPITECH PROJECT, 2018
** my_compute_power_rec
** File description:
** compute an power operation with recursive method
*/

#include "my.h"

int my_pow(int nb, int power)
{
    int res = nb;

    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    for (int i = 0; i < power - 1; i++){
        int tampon = nb * res;
        if (tampon / nb == res)
            res = tampon;
        else
            return (0);
    }
    return (res);
}
