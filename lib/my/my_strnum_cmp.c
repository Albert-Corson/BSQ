/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** compares two strings of numbers
*/

#include "my.h"

int my_strnum_cmp(char *s1, char *s2)
{
    char *n1 = rm_sign_minus(s1);
    char *n2 = rm_sign_minus(s2);

    if (my_strlen(n1) > my_strlen(n2))
        return (1);
    if (my_strlen(n1) < my_strlen(n2))
        return (-1);
    if (my_strcmp(n1, n2) > 0)
        return (1);
    if (my_strcmp(n1, n2) < 0)
        return (-1);
    return (0);
}