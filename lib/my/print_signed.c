/*
** EPITECH PROJECT, 2018
** Libmy
** File description:
** my_printf
*/

#include "my.h"

char *get_int(int *flags, va_list params)
{
    int tmp;

    if (flags[6] == 3) {
        tmp = va_arg(params, int);
        return (my_itoa(readjust_nb(tmp, -128, 127)));
    } else if (flags[6] == 1) {
        tmp = va_arg(params, int);
        return (my_itoa(readjust_nb(tmp, -32768, 32767)));
    }
    if (flags[6] == 0)
        return (my_itoa(va_arg(params, long)));
    if (flags[6] == 2)
        return (my_itoa(va_arg(params, long long)));
    return (my_itoa(va_arg(params, int)));
}

char *get_char(int *flags, va_list params)
{
    unsigned char c;
    char *str = malloc(sizeof(char *) * 2);

    if (flags[6] == 0 || flags[6] == 2) {
        c = va_arg(params, int);
        if (my_isprintable(c))
            str[0] = c;
            return (str);
    } else
        str[0] = va_arg(params, int);
    return (str);
}

char *get_str(int *flags, va_list params)
{
    char *str;
    if (flags[6] != 0 || flags[6] != 2) {
        str = va_arg(params, char *);
        if (str == 0)
            return ("(null)");
        return (str);
    }
    return ("\0");
}

char *get_showoctal(int *flags, va_list params)
{
    const char *str = va_arg(params, const char *);
    if (str == NULL)
        return ("(null)");
    return (my_showstr_octal(str));
}

char *get_pointer_hex(int *flags, va_list params)
{
    char *base = "0123456789abcdef";
    char *str;
    unsigned long long ptr;

    ptr = va_arg(params, unsigned long long);
    if ((&ptr)[0] == 0)
        return ("(nil)");
    str = malloc(sizeof(char) * (my_nbrlen((&ptr)[0]) + 1));
    str = my_strcat(str, convert_base_ten_to_x(my_itoa((&ptr)[0]), base, 1));
    return (str);
}