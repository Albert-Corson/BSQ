/*
** EPITECH PROJECT, 2018
** Libmy
** File description:
** rm minus signs
*/

#include "my.h"

char *rm_sign_minus(char *str)
{
    char *rtn = my_strdup(str);
    int n = 0;

    while (rtn[n] == '-' || rtn[n] == '+') {
        ++n;
    }
    return (rtn + n);
}