/*
** EPITECH PROJECT, 2018
** my_compute_power_rec
** File description:
** my_compute_power_rec
*/

int my_compute_power_rec(int nb, int p)
{
    int n;

    n = 1;
    if (p < 0) {
        return (0);
    }else if (p == 0) {
        return (1);
    } else {
        n = nb;
        if (p > 1) {
            n = n * my_compute_power_rec (n, p-1);
        }
    }
    if (nb > 0 && n <= 0) {
        return (0);
    }
    return (n);
}