/*
** EPITECH PROJECT, 2018
** my_open
** File description:
** open an file
*/

#include "my.h"

fd_t my_open(char const *filepath, open_mode_t mode)
{
    return open(filepath, mode);
}