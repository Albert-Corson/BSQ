/*
** EPITECH PROJECT, 2018
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (nb < 2) {
        return (2);
    }
    while (my_is_prime(nb) != 1) {
        ++nb;
    }
    return (nb);
}
