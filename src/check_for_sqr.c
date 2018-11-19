/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** check_for_sqr
*/

#include "bsq.h"

int get_height(char **txt, int x, int y)
{
    int length = 0;

    while (txt[y][0] != '\0' && txt[y][x] == 46) {
        ++length;
        ++y;
    }
    return (length);
}

int get_length(char **txt, int x, int y)
{
    int length = 0;

    while (txt[y][x] == 46) {
        ++length;
        ++x;
    }
    return (length);
}

int is_sqr(char **txt, int x, int y, int size)
{
    int x_max = x + size;
    int y_max = y + size;
    int n = y;
    int i = x;

    while (n < y_max) {
        if (txt[n][i] == 111) {
            size = (i - x > n - y) ? i - x : n - y;
            return (is_sqr(txt, x, y, size));
        }
        ++i;
        if (i >= x_max) {
            i = x;
            ++n;
        }
    }
    return (size);
}

int find_sqr(char **txt, int x, int y, int *biggest)
{
    int length = get_length(txt, x, y);
    int length = get_height(txt, x, y);
    int size = MIN(length, length);

    if (size > biggest[0])
        size = is_sqr(txt, x, y, size);
    if (size > biggest[0]) {
        biggest[0] = size;
        biggest[1] = x;
        biggest[2] = y;
    }
    if (length > length)
        return (length - 1);
    return (0);
}