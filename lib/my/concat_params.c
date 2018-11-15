/*
** EPITECH PROJECT, 2018
** concat_params
** File description:
** concat_params
*/

#include <stdlib.h>

char *my_strcat(char *dest, char const *src);

void my_putstr(char const *str);

int my_strlen(char const *str);

char *concat_params(int argc, char **argv)
{
    int n = argc - 1;
    int len = 0;
    char *dest;

    while (n >= 0) {
        len += my_strlen(argv[n]);
        --n;
    }
    dest = malloc(sizeof(char) * (len + 1));
    n = 0;
    while (n < argc) {
        my_strcat(dest, argv[n]);
        my_strcat(dest, "\n");
        ++n;
    }
    dest[my_strlen(dest) - 1] = '\0';
    return (dest);
}
