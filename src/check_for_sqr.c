/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** check_for_sqr
*/

#include "bsq.h"

int get_height(char **txt, int x, int y)
{
    int h = 0;

    while (txt[y][x] == '.') {
        ++h;
        ++y;
    }
    return (h);
}

int get_length(char **txt, int x, int y)
{
    int l = 0;

    while (txt[y][x] == '.') {
        ++l;
        ++x;
    }
    return (l);
}

int is_sqr(char **txt, int x, int y, int t)
{
    int x_max = x + t;
    int y_max = y + t;
    int n = y;
    int i = x;

    while (n < y_max) {
        if (txt[n][i] == 'o') {
            t = i - x;
            return (is_sqr(txt, x, y, t));
        } else
            ++i;
        if (i >= x_max) {
            i = x;
            ++n;
        }
    }
    return (t);
}

int find_sqr(char **txt, int x, int y, int *biggest)
{
    int l = get_length(txt, x, y);
    int h = get_height(txt, x, y);
    int t = MIN(l, h);

    if (t > biggest[0])
        t = is_sqr(txt, x, y, t);
    if (t > biggest[0]) {
        biggest[0] = t;
        biggest[1] = x;
        biggest[2] = y;
    }
    if (h > l)
        return (l - 1);
    return (0);
}