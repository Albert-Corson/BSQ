/*
** EPITECH PROJECT, 2018
** PSU my_printf
** File description:
** Returns an array of ints that corresponds certain types to print
*/

#include "my.h"

int op_flags(char const *str, int n, char c)
{
    char *flags = "# +-0";

    while (my_strchr(flags, str[n]) != -1) {
        if (str[n] == c)
            return (1);
        ++n;
    }
    return (0);
}

int get_flags_nbr(int *flags, char const *str, int n)
{
    flags[5] = my_getnbr(str + n);
    n += skip_nb_base(str + n, "0");
    if (str[n] == '.' && str[n + 1] != '-') {
        flags[8] = my_getnbr(str + n + 1);
        n += skip_nb_base(str + n + 1, "0") + 1;
    } else
        flags[8] = -1;
    return (n);
}

int *get_flag(char const *str, int n)
{
    int *flags = malloc(sizeof(int) * (8 + 1));

    flags[0] = op_flags(str, n, '#');
    flags[1] = op_flags(str, n, ' ');
    flags[2] = op_flags(str, n, '+');
    flags[3] = op_flags(str, n, '-');
    flags[4] = op_flags(str, n, '0');
    while (my_strchr("# 0+-", str[n]) != -1)
        ++n;
    n = get_flags_nbr(flags, str, n);
    flags[6] = my_strchr("lhq", str[n]);
    n += my_strchr("lhq", str[n]) == -1 ? 0 : 1;
    if (my_strchr("lh", str[n]) == flags[6] && flags[6] != -1) {
        flags[6] += 2;
        ++n;
    }
    flags[7] = my_strchr("uobxXidcsSp%", str[n]);
    return (flags);
}

int skip_flag(char const *str, int n)
{
    while (my_strchr("# 0+-", str[n]) != -1)
        ++n;
    n += skip_nb_base(str + n, "0");
    if (str[n] == '.')
        n += skip_nb_base(str + n + 1, "0") + 1;
    if (my_strchr("lhq", str[n]) >= 0)
        ++n;
    if (my_strchr("lh", str[n]) >= 0)
        ++n;
    if (my_strchr("uobxXidcsSp%", str[n]) >= 0)
        ++n;
    return (n);
}