/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** format_check
*/

#include "bsq.h"

void check_txt(char **txt, int *size)
{
    int n = 0;
    int i = 0;

    while (n < size[1]) {
        if (txt[n][i] != '.' && txt[n][i] != 'o')
            exit (84);
        ++i;
        if (i == size[0]) {
            i = 0;
            ++n;
        }
    }
}