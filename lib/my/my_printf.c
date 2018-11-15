/*
** EPITECH PROJECT, 2018
** Libmy
** File description:
** my_printf
*/

#include "my.h"

int my_printf(char const *str, ...)
{
    int n = 0;
    int nb_printed = 0;
    va_list params;

    va_start(params, str);
    while (str[n] != '\0') {
        if (str[n] != '%') {
            nb_printed += my_putchar(str[n]);
            ++n;
        } else{
            ++n;
            nb_printed += print_params(get_flag(str, n), params, n, str);
            n = skip_flag(str, n);
        }
    }
    va_end(params);
    return (nb_printed);
}