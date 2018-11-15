/*
** EPITECH PROJECT, 2018
** my_compute_square_root
** File description:
** task05
*/

int my_str_isanum(char const str);

int my_count_wrds(char const *str)
{
    int n = 0;
    int nb_words = 0;

    while (str[n] != '\0') {
        if (my_str_isanum(str[n]) && !my_str_isanum(str[n + 1]))
            ++nb_words;
        ++n;
    }
    return (nb_words);
}