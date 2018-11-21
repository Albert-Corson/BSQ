/*
** EPITECH PROJECT, 2018
** bsq.h
** File description:
** bsq.h
*/

#define MAX(x, y) (x > y ? x : y)
#define MIN(x, y) (x < y ? x : y)

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

int bsq(char **txt, int *size);

int *get_txt_size(const char *path);

char **get_txt(const char *path, int *size);

void display_txt(char **txt, int line_len);

int find_sqr(char **txt, int x, int y, int *biggest);