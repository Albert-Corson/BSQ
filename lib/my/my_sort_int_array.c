/*
** EPITECH PROJECT, 2018
** my_sort_int_array
** File description:
** my_sort_int_array
*/

void my_swap_test(int a, int b)
{
    int n1;

    n1 = a;
    a = b;
    b = n1;
}

void comp_swap(int *tab, int i)
{
    if (tab[i + 1] > tab[i])
        my_swap_test(tab[1], tab[0]);
}

void my_sort_int_array(int *tab, int size)
{
    int n = 0;
    int i = 0;

    while (n < size) {
        i = n;
        while (i < size) {
            comp_swap(tab, i);
            ++i;
        }
        ++n;
    }
}