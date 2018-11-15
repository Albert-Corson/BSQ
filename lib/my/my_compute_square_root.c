/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** task05
*/

int my_compute_power_rec(int nb, int p);

int my_compute_square_root(int nb)
{
    int n;

    n = 1;
    while (n * n < nb)
        ++n;
    if (my_compute_power_rec(n, 2) == nb)
        return (n);
    else
        return (0);
}
