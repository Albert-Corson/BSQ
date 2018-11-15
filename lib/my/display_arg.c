/*
** EPITECH PROJECT, 2018
** Libmy
** File description:
** my_printf
*/

#include "my.h"

char *get_arg(int *flags, va_list params)
{
    char *(*table[12])(int *flags, va_list params) = {
        un_decimal,
        un_octal,
        un_binary,
        un_hex,
        un_hex_cap,
        get_int,
        get_int,
        get_char,
        get_str,
        get_showoctal,
        get_pointer_hex};
    return (table[flags[7]](flags, params));
}

int print_params(int *flags, va_list params, int n, char const *proto)
{
    int nb_printed = 0;
    char *str;
    if (flags[7] == -1 && can_print_invalid(proto, n))
        return (invalid_flags_print(flags));
    else if (flags[7] != -1 && flags[7] != 11) {
        str = get_arg(flags, params);
        flags = readjust_flags(flags, str);
        nb_printed = print_aligned(flags, str, 0);
    }
    if (flags[7] == 11)
        nb_printed = my_putchar('%');
    return (nb_printed);
}