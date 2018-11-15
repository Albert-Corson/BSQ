/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** task02
*/

#include <unistd.h>

int my_strlen(char const *str);

void my_puterror(char const *str)
{
    write(2, str, my_strlen(str));
}