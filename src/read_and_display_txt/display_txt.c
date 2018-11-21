/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** display_txt
*/

#include "bsq.h"

void display_txt(char **txt, int line_len)
{
    int i = 0;

    while (txt[i][0] != '\0') {
        write(1, txt[i], line_len);
        write(1, "\n", 1);
        ++i;
    }
}