/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** getnbr in char *
*/

#include "my.h"

char *my_getnbr_str_base(char *str, char *base)
{
    int n = 0;
    int i = 0;
    int sign = 1;
    char *nbr = malloc(sizeof(char) * (my_strlen(str) + 1));

    while (str[n] == '-') {
        sign = str[n] == '-' ? sign * -1 : sign;
        ++n;
    }
    nbr[0] = sign == -1 ? '-' : nbr[0];
    i = sign == -1 ? 1 : 0;
    while (n < my_strlen(str)) {
        if (my_strchr(base, str[n]) != -1)
            nbr[i] = str[n];
        else
            n = my_strlen(str) - 1;
        ++n;
        ++i;
    }
    return (nbr);
}