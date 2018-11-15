/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_itoa
*/

#include "my.h"

char *my_unitoa(unsigned long long nb)
{
    int sign = nb < 0 ? 1 : 0;
    unsigned long long cp = nb;
    int size = 1;
    char *str;

    while (cp >= 10) {
        cp /= 10;
        ++size;
    }
    str = malloc(sizeof(char) * (size + 2));
    nb = ABS(nb);
    if (nb == 0)
        return ("0");
    while (nb >= 1) {
        str[my_strlen(str)] = nb % 10 + 48;
        nb /= 10;
    }
    return (my_revstr(str));
}