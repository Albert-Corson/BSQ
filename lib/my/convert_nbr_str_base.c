/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** convert a string with numbers in it to base 10
*/

#include "my.h"

char *convert_str_base(char *str, char *base)
{
    char *rtn = malloc(sizeof(char) * my_strlen(str) * 10 / my_strlen(base));
    char *(*p_x_to_10)(char *, char *) = convert_base_x_to_10;
    char *(*p_nbr_str_base)(char *, char *) = my_getnbr_str_base;
    int n = 0;
    int i = 0;

    while (n < my_strlen(str)) {
        if (my_strchr(base, str[n]) != -1) {
            my_strcat(rtn, p_x_to_10(p_nbr_str_base(str + n, base), base));
            i = my_strlen(rtn);
            n += skip_nb_base(str + n, base);
        } else {
            rtn[i] = str[n];
            ++i;
            ++n;
        }
    }
    return (rtn);
}