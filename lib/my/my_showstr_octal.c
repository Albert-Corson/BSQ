/*
** EPITECH PROJECT, 2018
** Libmy
** File description:
** my_showstr_octal
*/

#include "my.h"

char *my_showstr_octal(char const *str)
{
    int n = 0;
    char *oct = "01234567";
    char *rtn = malloc(sizeof(char *) * ((my_strlen(str) * 2) * 8/10));

    if (str[0] == '\0')
        return (rtn);
    if (my_isprintable(str[n])) {
        rtn[my_strlen(rtn)] = str[n];
    } else {
        rtn[my_strlen(rtn)] = '\\';
        if (str[n] < 8)
            my_strcat(rtn, "00");
        else if (str[n] < 64)
            rtn[my_strlen(rtn)] = '0';
        my_strcat(rtn, convert_base_ten_to_x(my_itoa(str[n]), oct, 0));
    }
    rtn = my_strcat(rtn, my_showstr_octal(str + 1));
    return (rtn);
}