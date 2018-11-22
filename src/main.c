/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** main
*/

#include "bsq.h"

int main(int argc, char const *argv[])
{
    int n = 0;
    int rtn = 0;
    int *size = NULL;
    char **txt = NULL;

    if (argc != 2)
        return (84);
    check_error(argv[1]);
    size = get_txt_size(argv[1]);
    txt = get_txt(argv[1], size);
    if (bsq(txt, size) == 84)
        rtn = 84;
    while (n < size[1]) {
        free(txt[n]);
        ++n;
    }
    free(txt);
    free(size);
    return (rtn);
}