/*
** EPITECH PROJECT, 2018
** libmy
** File description:
** convert nbr from any base to anybase
*/

#include "my.h"

char *convert_base_x_to_10(char *nbr, char *base)
{
    int n = my_strlen(nbr) - 1;
    int i = 0;
    int x = 0;
    int nb = 0;
    int tmp;
    int rtn;
    int nbase = my_strlen(base);
    int sign = nbr[0] == '-' ? 1 : 0;

    if (sign)
        x = 1;
    while (n >= x) {
        nb = my_strchr(base, nbr[n]);
        tmp = nb * my_compute_power_rec(nbase, i);
        rtn += tmp;
        --n;
        ++i;
    }
    if (sign)
        rtn *= -1;
    return (my_itoa(rtn));
}

char *convert_base_ten_to_x(char *nbr, char *base, int is_signed)
{
    int nbase = my_strlen(base);
    char *rtn = malloc(sizeof(char) * my_strlen(nbr) * (10 / nbase) + 1);
    int i = 0;
    int sign;

    nbr = (nbr[0] == '-') ? nbr + 1 : nbr;
    sign = (nbr[0] == '-') ? 1 : 0;
    while (my_getunnbr(nbr) >= nbase) {
        rtn[i] = base[my_getunnbr(nbr) % nbase];
        nbr = my_unitoa(my_getunnbr(nbr) / nbase);
        ++i;
    }
    rtn[i] = base[my_getunnbr(nbr)];
    rtn[i + 1] = sign ? '-' : '\0';
    return (my_revstr(rtn));
}

char *nbr_base_x_to_y(char *nbr, char *in_base, char *to_base, int is_signed)
{
    char *rtn;

    rtn = convert_base_x_to_10(nbr, in_base);
    rtn = convert_base_ten_to_x(rtn, to_base, is_signed);
    return (rtn);
}