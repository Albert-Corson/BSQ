/*
** EPITECH PROJECT, 2018
** my_show_word_array
** File description:
** my_show_word_array
*/

void my_putstr(char const *c);

int my_show_word_array(char * const *tab)
{
    int n = 0;

    while (tab[n] != 0) {
        my_putstr(tab[n]);
        my_putstr("\n");
        ++n;
    }
    return (0);
}
