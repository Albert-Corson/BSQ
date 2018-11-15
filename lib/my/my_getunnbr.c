/*
** EPITECH PROJECT, 2018
** my_getnbr
** File description:
** my_get_unsigned_nbr
*/

int my_strlen(char const *);

unsigned long long my_getunnbr(char const *str)
{
    long long nbr = 0;
    int n = 0;

    while (str[n] == ' ' || str[n] == '-' || str[n] == '+')
        ++n;
    while (n < my_strlen(str)) {
        if (str[n] <= 57 && str[n] >= 48)
            nbr = nbr * 10 + str[n] - 48;
        if (str[n] > 57 || str[n] < 48)
            n = my_strlen(str);
        if (nbr < 0)
            return (0);
        ++n;
    }
    return (nbr);
}