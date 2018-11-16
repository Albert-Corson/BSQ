/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** get_txr
*/

#include "bsq.h"

void free_and_exit(int *rtn, char *tmp)
{
    free(rtn);
    free(tmp);
    exit (84);
}

int *get_txt_size(const char *path)
{
    int fd = open(path, O_RDONLY);
    char *tmp = malloc(sizeof(char));
    char *nb_line = "\0";
    int *rtn = malloc(sizeof(int) * 3);

    if (fd < 0)
        free_and_exit(rtn, tmp);
    while (tmp[0] != '\n') {
        read(fd, tmp, 1);
        nb_line = my_allocat(nb_line, tmp);
    }
    read(fd, tmp, 1);
    while (tmp[0] != '\n') {
        read(fd, tmp, 1);
        ++rtn[0];
    }
    rtn[1] = my_getnbr(nb_line);
    free(tmp);
    close(fd);
    return (rtn);
}

char **get_txt(const char *path, int *size)
{
    char **rtn = malloc(sizeof(char *) * (size[1] + 1));
    char *tmp = malloc(sizeof(char *));
    int fd = open(path, O_RDONLY);
    int n = 0;
    int i = 0;

    while (tmp[0] != '\n')
        read(fd, tmp, 1);
    while (n < size[1]) {
        rtn[n] = malloc(sizeof(char) * size[0]);
        read(fd, rtn[n], size[0]);
        read(fd, tmp, 1);
        ++n;
    }
    rtn[n] = malloc(sizeof(char));
    rtn[n][0] = '\0';
    free(tmp);
    close(fd);
    return (rtn);
}