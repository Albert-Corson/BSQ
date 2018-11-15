/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_nbrlen
*/

#include "my.h"

int my_nbrlen(long long nb)
{
    int n = 1;

    if (nb < 0) {
        ++n;
        nb = ABS(nb);
    }
    while (nb > 10) {
        nb /= 10;
        ++n;
    }
    return (n);
}