/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_itoa
*/

#include "my.h"

char *my_itoa(long long nb)
{
    long long sign = nb < 0 ? 1 : 0;
    long long n = 1;
    char *str = malloc(sizeof(char) * (my_nbrlen(nb) + 2));

    nb = ABS(nb);
    if (nb == 0)
        return ("0");
    while (nb >= 1) {
        str[my_strlen(str)] = nb % 10 + 48;
        nb /= 10;
    }
    if (sign)
        str[my_strlen(str)] = '-';
    return (my_revstr(str));
}