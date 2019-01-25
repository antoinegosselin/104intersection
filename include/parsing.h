/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** parsing
*/

#ifndef PARSING_H_
#define PARSING_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

#define INT_ARR_SIZE 8
enum {OPT, XP, YP, ZP, XV, YV, ZV, P};

int *parser(char **argv); //only accept integer in argv input !

#endif /* !PARSING_H_ */
