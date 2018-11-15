/*
** EPITECH PROJECT, 2018
** my_strdup
** File description:
** my_strdup
*/

#include <stdlib.h>

char *my_strncpy(char *dest, char const *src, int n);

int my_strlen(char const *str);

char *my_strndup(char const *src, int n)
{
    char *dest;

    dest = malloc(sizeof(char) * (n + 1));
    my_strncpy(dest, src, n);
    return (dest);
}
