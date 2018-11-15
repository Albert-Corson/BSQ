/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** my_allocat
*/

#include "my.h"

char *my_allocat(char *dest, const char *src)
{
    int len = my_strlen(dest) + my_strlen(src);
    char *rtn = malloc(sizeof(char) * (len + 1));
    int i = 0;
    int n = 0;

    my_strcpy(rtn, dest);
    my_strcat(rtn, src);
    return (rtn);
}
