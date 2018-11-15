/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** display_txt
*/

#include "bsq.h"

void display_txt(char **txt)
{
    int i = 0;

    while (txt[i][0] != '\0') {
        my_printf("%s\n", txt[i]);
        ++i;
    }
    exit (0);
}