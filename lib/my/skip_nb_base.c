/*
** EPITECH PROJECT, 2018
** Libmy
** File description:
** skip a number (in a given base) in a string
*/

#include "my.h"

int skip_nb_base(char const *str, char const *base)
{
    int i = 0;

    base = my_strlen(base) == 1 ? "0123456789" : base;
    while (str[i] == '-')
        ++i;
    while (i < my_strlen(str)) {
        if (!(my_strchr(base, str[i]) != -1))
            return (i);
        ++i;
    }
    return (i);
}