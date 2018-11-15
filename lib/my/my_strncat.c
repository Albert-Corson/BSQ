/*
** EPITECH PROJECT, 2018
** my_strncat
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int n = 0;
    int i = 0;

    while (dest[n] != '\0')
        ++n;
    while (src[i] != '\0' && i < nb) {
        dest[n] = src[i];
        ++n;
        ++i;
    }
    dest[n] = '\0';
    return (dest);
}
