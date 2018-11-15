/*
** EPITECH PROJECT, 2018
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>

int my_strlen(char const *);

char *my_strdup(char const *);

int anum(char const str)
{
    if ((64 < str && str < 91) || (96 < str && str < 123))
        return (1);
    else if (47 < str && str < 58)
        return (1);
    else
        return (0);
}

int count_nb_words(char const *str, char *cpy_str)
{
    int n = 0;
    int nb_words = 0;

    while (str[n] != '\0') {
        cpy_str[n] = str[n];
        if (anum(str[n]) && !anum(str[n + 1]))
            ++nb_words;
        else if (anum(str[n]) == 0)
            cpy_str[n] = '\0';
        ++n;
    }
    return (nb_words);
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int n = 0;
    char **rtrn;
    char *cpy_str = my_strdup(str);

    rtrn = malloc(sizeof(char *) * (count_nb_words(str, cpy_str) + 1));
    while (i < my_strlen(str)) {
        if ((i == 0 && anum(str[i])) || (anum(str[i]) && !anum(str[i - 1]))) {
            rtrn[n] = my_strdup(cpy_str + i);
            ++n;
        }
        ++i;
    }
    rtrn[n] = 0;
    return (rtrn);
}
