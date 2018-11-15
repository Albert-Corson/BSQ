/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** task03
*/

#include <stddef.h>

unsigned long long my_strlen(char const *str)
{
    if (str == NULL)
        return (0);
    unsigned long long n = 0;

    while (str[n] != '\0') {
        ++n;
    }
    return (n);
}
