/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** Functions to display unsigned numbers in different conditions
*/

#include "my.h"

char *un_decimal(int * flags, va_list params)
{
    int tmp;

    if (flags[6] == 3) {
        tmp = va_arg(params, int);
        return (my_unitoa(readjust_nb(tmp, 0, 255)));
    } else if (flags[6] == 1) {
        tmp = va_arg(params, int);
        return (my_unitoa(readjust_nb(tmp, 0, 65535)));
    }
    if (flags[6] == 0)
        return (my_unitoa(va_arg(params, unsigned long)));
    if (flags[6] == 2)
        return (my_unitoa(va_arg(params, unsigned long long)));
    return (my_unitoa(va_arg(params, unsigned int)));
}

char *un_octal(int * flags, va_list params)
{
    char *base = "01234567";

    return (convert_base_ten_to_x(un_decimal(flags, params), base, 1));
}

char *un_binary(int * flags, va_list params)
{
    char *base = "01";

    return (convert_base_ten_to_x(un_decimal(flags, params), base, 1));
}

char *un_hex(int * flags, va_list params)
{
    char *base = "0123456789abcdef";

    return (convert_base_ten_to_x(un_decimal(flags, params), base, 1));
}

char *un_hex_cap(int * flags, va_list params)
{
    char *base = "0123456789ABCDEF";

    return (convert_base_ten_to_x(un_decimal(flags, params), base, 1));
}
