/*
** EPITECH PROJECT, 2018
** Libmy
** File description:
** my_printf
*/

#include "my.h"

int readjust_nb(int nb, int min, int max)
{
    while (nb < min)
        nb -= (min - max) - 1;
    while (nb > max)
        nb += (min - max) - 1;
    return (nb);
}

int *specific_readjust(int *flags, char *str)
{
    if (flags[7] == 5 || flags[7] == 6) {
        if ((flags[2] || flags[1]) && str[0] != '-')
            --flags[5];
        if ((flags[7] == 5 || flags[7] == 6) && str[0] == '-') {
            flags[1] = 0;
            flags[2] = 0;
        }
    }
    if (flags[8] >= 0)
        flags[4] = 0;
    if (flags[7] == 7)
        flags[8] = -1;
    return (flags);
}

int *readjust_flags(int *flags, char *str)
{
    if (flags[3]) {
        flags[4] = 0;
        flags[1] = 0;
    } else if (flags[4])
        flags[1] = 0;
    flags[1] = flags[2] ? 0 : flags[1];
    if (flags[7] != 5 && flags[7] != 6) {
        flags[1] = 0;
        flags[2] = 0;
    }
    flags[4] = (flags[7] > 6 && flags[7] != 10) ? 0 : flags[4];
    flags = specific_readjust(flags, str);
    return (flags);
}