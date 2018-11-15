/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_strchr
*/

#include "my.h"

int my_strchr(char const *str, char c)
{
    int index = 0;
    int len = my_strlen(str);

    while (index < len) {
        if (str[index] == c)
            return (index);
        ++index;
    }
    return (-1);
}