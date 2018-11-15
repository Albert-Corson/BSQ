/*
** EPITECH PROJECT, 2018
** my_put_nbr_unsigned
** File description:
** prints unsigned numbers up to unsigned long long
*/

void my_putchar(char c);

unsigned long long my_put_unnbr(unsigned long long int nb)
{
    unsigned long long int nb_len = 1;

    if (nb < 10) {
        my_putchar(nb + 48);
    } else {
        if (nb >= 10) {
            nb_len += my_put_unnbr(nb / 10);
        }
        my_putchar((nb % 10) + '0');
    }
    return (nb_len);
}