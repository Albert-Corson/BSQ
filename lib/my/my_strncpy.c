/*
** EPITECH PROJECT, 2018
** my_strncpy
** File description:
** Copy n characters of a string
*/

int my_strlen(char const *c);

char *my_strncpy(char *dest, char const *src, int n)
{
    int a = 0;

    if (my_strlen(src) < n)
        n = my_strlen(src);
    while (n > 0) {
        dest[a] = src[a];
        --n;
        ++a;
    }
    dest[a] = '\0';
    return (dest);
}
