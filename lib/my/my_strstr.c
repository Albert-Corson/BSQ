/*
** EPITECH PROJECT, 2018
** my_strstr
** File description:
** Finds the first occurence of a character in a string
*/

char strstr_compare(int n, char *str, char const *to_find)
{
    int j = 0;

    while (to_find[j] != '\0') {
        if (to_find[j] != str[n + j])
            return (0);
        ++j;
    }
    return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    int n = 0;

    while (str[n] != '\0') {
        if (str[n] == to_find[0] && strstr_compare(n, str, to_find) == 1)
            return (&str[n]);
        ++n;
    }
    return ("NULL");
}
