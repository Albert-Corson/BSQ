/*
** EPITECH PROJECT, 2018
** Libmy
** File description:
** my_printf
*/

#include "my.h"

int invalid_flags_print(int *flags)
{
    int nb_printed = 1;

    nb_printed += my_putchar('%');
    if (flags[0])
        nb_printed += my_putchar('#');
    if (flags[1] && !flags[2])
        nb_printed += my_putchar(' ');
    if (flags[2])
        nb_printed += my_putchar('+');
    if (flags[4] && !flags[3])
        nb_printed += my_putchar('0');
    if (flags[3])
        nb_printed += my_putchar('-');
    if (flags[5] != 0)
        nb_printed += my_put_nbr(flags[5]);
    if (flags[8] != -1) {
        nb_printed += my_putchar('.');
        nb_printed += my_put_nbr(flags[8]);
    }
    return (nb_printed);
}

int can_print_invalid(char const *str, int n)
{
    int i = skip_flag(str, n);

    if (i < my_strlen(str))
        return (1);
    n -= 2;
    while (n >= 0) {
        if (str[n] == '%')
            return (1);
        --n;
    }
    return (0);
}