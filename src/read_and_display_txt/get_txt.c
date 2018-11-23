/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** get_txr
*/

#include "bsq.h"

void check_error(const char *path)
{
    int fd = open(path, O_RDONLY);
    char tmp;

    if (fd < 0)
        exit (84);
    read(fd, &tmp, 1);
    if (tmp > '9' || tmp < '0') {
        close(fd);
        exit (84);
    }
    close(fd);
}

int *get_txt_size(const char *path)
{
    int fd = open(path, O_RDONLY);
    char tmp;
    int *rtn = malloc(sizeof(int) * 2);

    while (tmp != '\n') {
        read(fd, &tmp, 1);
        if (tmp != '\n')
            rtn[1] = (rtn[1] * 10) + (tmp - 48);
    }
    read(fd, &tmp, 1);
    if (tmp != 46 && tmp != 111) {
        free(rtn);
        exit (84);
    }
    while (tmp != '\n') {
        read(fd, &tmp, 1);
        ++rtn[0];
    }
    close(fd);
    return (rtn);
}

char **get_txt(const char *path, int *size)
{
    char **rtn = malloc(sizeof(char *) * (size[1] + 1));
    char *tmp = malloc(sizeof(char));
    int fd = open(path, O_RDONLY);
    int n = 0;

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