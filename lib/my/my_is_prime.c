/*
** EPITECH PROJECT, 2018
** my_is_prime
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    int n;

    n = 2;
    if (nb == 2 || nb == 3) {
        return (1);
    } else if (nb <= 1) {
        return (0);
    }
    while (n < nb) {
        if (nb % n == 0) {
            return (0);
        }
        ++n;
    }
    return (1);
}