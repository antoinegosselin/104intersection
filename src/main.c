/*
** EPITECH PROJECT, 2018
** 104intersection
** File description:
** main
*/

#include <stdio.h>
#include "my.h"
#include "parsing.h"

const float MY_PI = 3.14159265358979323846264338327950288419716939937510;

int print_usage()
{
    printf("USAGE\n     ./104intersection opt xp yp zp xv yv zv p\n\n");
    printf("    opt             surface option: 1 for a sphere, 2 for a cylinder, 3 for a cone\n");
    printf("    (xp, yp, zp)    coordinates of a point by which the light ray passes throught\n");
    printf("    (xv, yv, zv)    coordinates of a vector parallel to the light ray\n");
    printf("    p               parameter: radius of the sphere, radius of the cylinder, or\n");
    printf("                    angle formed by the cone and the Z-axis\n");
    return (84);
}

int main(int ac, char **av)
{
    int *var;
    float a;
    float b;
    float c;
    float delta;
    float angle;
    float x1;
    float x2;

    if (ac != 9)
        return (print_usage());
    var = parser(av);
    if (var[OPT] == 1) {
        printf("Sphere of radius %d\n", var[P]);
        a = var[XV] * var[XV] + var[YV] * var[YV] + var[ZV] * var[ZV];
        b = (2 * var[XP] * var[XV]) + (2 * var[YP] * var[YV]) + (2 * var[ZP] * var[ZV]);
        c = var[XP] * var[XP] + var[YP] * var[YP] + var[ZP] * var[ZP] - var[P] * var[P];
        
    }
    else if (var[OPT] == 2) {
        printf("Cylinder of radius %d\n", var[P]);
        if (var[XV] == 0 && var[YV] == 0) {
            if (((var[XP] * var[XP]) + (var[YP] * var[YP]) - (var[P] * var[P])) == 0) {
                printf("Line passing through the point (%d, %d, %d) and parallel to the vector (%d, %d, %d)\n", var[XP], var[YP], var[ZP], var[XV], var[YV], var[ZV]);
                printf("There is an infinite number of intersection points.\n");
                return (0);
            } else {
                printf("Line passing through the point (%d, %d, %d) and parallel to the vector (%d, %d, %d)\n", var[XP], var[YP], var[ZP], var[XV], var[YV], var[ZV]);
                printf("No intersection point.\n");
            }
        }
        a = var[XV] * var[XV] + var[YV] * var[YV];
        b = (2 * var[XP] * var[XV]) + (2 * var[YP] * var[YV]);
        c = var[XP] * var[XP] + var[YP] * var[YP] - var[P] * var[P];
    }
    else if (var[OPT] == 3) {
        if (var[P] < 0 || var[P] > 90)
            exit(84);
        printf("Cone with a %d degree angle\n", var[P]);
        angle = 90 - var[P];
        angle = (angle * MY_PI) / 180;
        a = var[XV] * var[XV] + var[YV] * var[YV] - ((var[ZV] * var[ZV]) / (tan(angle) * tan(angle)));
        printf("a: %.3f\n", a);
        b = (2 * var[XP] * var[XV]) + (2 * var[YP] * var[YV])  - ((2 * var[ZP] * var[ZV]) / (tan(angle) * tan(angle)));
        c = var[XP] * var[XP] + var[YP] * var[YP] - ((var[ZP] * var[ZP]) / (tan(angle) * tan(angle)));
        if (a == 0) {
            printf("1 intersection point:\n");
            x1 = c / b;
            printf("(%.3f, %.3f, %.3f)\n", var[XP] + x1 * var[XV], var[YP] + x1 * var[YV], var[ZP] + x1 * var[ZV]);
        }
    }
    printf("Line passing through the point (%d, %d, %d) and parallel to the vector (%d, %d, %d)\n", var[XP], var[YP], var[ZP], var[XV], var[YV], var[ZV]);
    delta = (b * b) - (4 * a * c);
    if (delta < 0)
        printf("No intersection point.\n");
    else if (delta == 0) {
        printf("1 intersection point:\n");
        x1 = ((-1 * b) / (2 * a));
        printf("(%.3f, %.3f, %.3f)\n", var[XP] + x1 * var[XV], var[YP] + x1 * var[YV], var[ZP] + x1 * var[ZV]);
    } else {
        printf("2 intersection points:\n");
        x1 = (((-1 * b) + sqrt(delta)) / (2 * a));
        x2 = (((-1 * b) - sqrt(delta)) / (2 * a));
        printf("(%.3f, %.3f, %.3f)\n", var[XP] + x1 * var[XV], var[YP] + x1 * var[YV], var[ZP] + x1 * var[ZV]);
        printf("(%.3f, %.3f, %.3f)\n", var[XP] + x2 * var[XV], var[YP] + x2 * var[YV], var[ZP] + x2 * var[ZV]);
    }
    free(var);
    return (0);
}