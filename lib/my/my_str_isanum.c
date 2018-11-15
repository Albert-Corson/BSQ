/*
** EPITECH PROJECT, 2018
** my_str_isanum
** File description:
** my_str_isanum
*/

int my_str_isanum(char const str)
{
    if ((64 < str && str < 91) || (96 < str && str < 123))
        return (1);
    else if (47 < str && str < 58)
        return (1);
    else
        return (0);
}