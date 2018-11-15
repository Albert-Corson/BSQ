/*
** EPITECH PROJECT, 2018
** my_strcapitalize
** File description:
** my_strcapitalize
*/

void capitalizer_low(char *str, int i)
{
    if (str[i] >= 97 && str[i] <= 122) {
        if (str[i - 1] == (32 || 45 || 43))
            str[i] -= 32;
    }
}

void capitalizer_up(char *str, int i)
{
    if (str[i] >= 97 && str[i] <= 122) {
        if (str[i - 1] == (32 || 45 || 43))
            str[i] -= 32;
    }
}

char *my_strcapitalize(char *str)
{
    int i = 1;

    while (str[i] != '\0')
    {
        capitalizer_up(str, i);
        capitalizer_low(str, i);
        ++i;
    }
    if (str[0] >= 97 && str[0] <= 122)
        str[0] -= 32;
    return (str);
}
