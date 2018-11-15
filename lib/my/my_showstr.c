/*
** EPITECH PROJECT, 2018
** Libmy
** File description:
** my_showstr
*/

#include "my.h"

int my_isprintable(char c)
{
    if (c <= 31 || c >= 127)
        return (0);
    return (1);
}

int my_showstr(char const *str)
{
    int n = 0;
    char *hex = "0123456789abcdef";

    if (str[n] == '\0')
        return (0);
    if (my_isprintable(str[n])) {
        my_putchar(str[n]);
    } else {
        my_putchar('\\');
        if (str[n] < 16)
            my_putchar(48);
        my_putstr(convert_base_ten_to_x(my_itoa(str[n]), hex, 1));
    }
    my_showstr(str + 1);
    return (0);
}