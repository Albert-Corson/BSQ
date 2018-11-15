/*
** EPITECH PROJECT, 2018
** bsq.h
** File description:
** bsq.h
*/

#include "my.h"

void bsq(char **txt, int *size);

int *get_txt_size(const char *path);

char **get_txt(const char *path, int *size);

void display_txt(char **txt);

void check_txt(char **txt, int *size);

int find_sqr(char **txt, int x, int y, int *biggest);