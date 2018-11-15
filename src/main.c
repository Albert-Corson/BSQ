/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** main
*/

#include "bsq.h"

int main(int argc, char const *argv[])
{
    int *size = get_txt_size(argv[1]);
    char **txt = get_txt(argv[1], size);

    check_txt(txt, size);
    bsq(txt, size);
    free(txt);
    free(size);
    return (0);
}
