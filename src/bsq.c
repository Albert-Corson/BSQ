/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** my_bsq
*/

#include "bsq.h"

void write_sqr(char **txt, int size, int x, int y)
{
    int n = y;
    int i = x;

    while (n < y + size) {
        txt[n][i] = 'x';
        ++i;
        if (i == x + size) {
            i = x;
            ++n;
        }
    }
}

int bsq(char **txt, int *size)
{
    int y = 0;
    int x = 0;
    int *biggest = malloc(sizeof(int) * 3);

    while (y < size[1]) {
        if (txt[y][x] == 46)
            x += find_sqr(txt, x, y, biggest);
        else if (txt[y][x] != 46 && txt[y][x] != 111) {
            free (biggest);
            return (84);
        }
        ++x;
        if (x == size[0]) {
            x = 0;
            ++y;
        }
    }
    write_sqr(txt, biggest[0], biggest[1], biggest[2]);
    free(biggest);
    display_txt(txt, size[0]);
    return (0);
}