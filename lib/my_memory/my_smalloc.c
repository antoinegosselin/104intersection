/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_smalloc
*/

#include "my.h"

void *my_smalloc(unsigned int size)
{
    void *mallocated = malloc(size);

    if (mallocated == 0)
        exit(84);
    return (mallocated);
}