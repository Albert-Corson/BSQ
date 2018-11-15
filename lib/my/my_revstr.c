/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** Reverses characters in a string
*/

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int len = my_strlen(str) - 1;
    int a = 0;
    char cp;

    while (a < len)
    {
        cp = str[a];
        str[a] = str[len];
        str[len] = cp;
        ++a;
        --len;
    }
    return (str);
}
