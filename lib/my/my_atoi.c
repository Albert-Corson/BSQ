/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_atoi
*/

#include "my.h"

int my_atoi(char *str)
{
    char *cp = my_strdup(str);
    int nbr = 0;
    int n = 0;
    int sign = 1;

    while (cp[n] == '+' || cp[n] == '-') {
        if (cp[n] == '-')
            sign *= -1;
        ++n;
    }
    while (cp[n] != '\0') {
        if (!(my_isnum(cp[n]) || cp[n] == '-' || cp[n] == '+'))
            return (nbr * sign);
        if (my_isnum(cp[n]))
            nbr = (nbr * 10) + cp[n] - '0';
        if (nbr < 0)
            return (0);
        ++n;
    }
    return (nbr * sign);
}