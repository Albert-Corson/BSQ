/*
** EPITECH PROJECT, 2018
** my_swap
** File description:
** Swaps content of two integers
*/

void my_swap(int *a, int *b)
{
    int n1;

    n1 = *a;
    *a = *b;
    *b = n1;
}
