/*
** EPITECH PROJECT, 2018
** Libmy
** File description:
** my_printf
*/

#include "my.h"

char *get_base(int *flags, char *to_print)
{
    int n = 0;
    char *str = malloc(sizeof(char) * 4);

    if (flags[0] && to_print[0] != '0') {
        if (flags[7] == 1)
            my_strcat(str, "0");
        if (flags[7] == 2)
            my_strcat(str, "01\\");
        if (flags[7] == 3)
            my_strcat(str, "0x");
        if (flags[7] == 4)
            my_strcat(str, "0X");
    }
    if (flags[7] == 10)
        my_strcat(str, "0x");
    return (str);
}

int show_padding(int *flags)
{
    if (flags[4])
        my_putchar('0');
    else
        my_putchar(' ');
    return (flags[5] - 1);
}

int if_padding_0(int *flags, char *str, char *base_str)
{
    int nb_printed = 0;

    if (flags[2] && !flags[3])
        nb_printed += my_putchar('+');
    if (flags[1] && !flags[3])
        nb_printed += my_putchar(' ');
    if (str[0] != '(')
        nb_printed += my_putstr(base_str);
    return (nb_printed);
}

char *precision_format(int *flags, char *str)
{
    char *tmp = malloc(sizeof(char) * (MAX(flags[8], my_strlen(str)) + 1));

    if (flags[8] == -1)
        return (str);
    if (flags[7] == 8)
        return (my_strncpy(tmp, str, flags[8]));
    flags[8] -= my_strlen(str);
    if (flags[7] != 7) {
        while (flags[8] > 0) {
            my_strcat(tmp, "0");
            --flags[8];
        }
        my_strcat(tmp, str);
        return (tmp);
    }
}

int print_aligned(int *flags, char *str, int nb_printed)
{
    char *base_str = get_base(flags, str);
    str = precision_format(flags, str);
    flags[5] -= my_strlen(str);

    flags[5] -= my_strlen(base_str);
    if (flags[4])
        nb_printed += if_padding_0(flags, str, base_str);
    while (flags[5] > 0 && !flags[3]) {
        flags[5] = show_padding(flags);
        ++nb_printed;
    }
    if (!flags[4])
        nb_printed += if_padding_0(flags, str, base_str);
    nb_printed += my_putstr(str);
    while (flags[5] > 0 && flags[3]) {
        flags[5] = show_padding(flags);
        ++nb_printed;
    }
    return (nb_printed);
}