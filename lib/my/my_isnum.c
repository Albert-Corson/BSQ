/*
** EPITECH PROJECT, 2018
** Libmy
** File description:
** my_isnum
*/

#include "../../include/my.h"

int my_isnum(char c)
{
    if (c > 47 && c < 58)
        return (1);
    else
        return (0);
}