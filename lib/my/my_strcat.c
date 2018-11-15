/*
** EPITECH PROJECT, 2018
** my_strcat
** File description:
** my_strcat
*/

char *my_strcat(char *dest, char const *src)
{
    int n = 0;
    int i = 0;

    while (dest[n] != '\0')
        ++n;
    while (src[i] != '\0') {
        dest[n] = src[i];
        ++n;
        ++i;
    }
    dest[n] = '\0';
    return (dest);
}
