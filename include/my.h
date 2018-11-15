/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#define CHECK (my_putstr("\nCheck\n"))
#define ABS(n) (n < 0 ? (n * -1) : n)
#define MAX(x, y) (x > y ? x : y)
#define MIN(x, y) (x < y ? x : y)

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

#include <criterion/criterion.h>
#include <criterion/redirect.h>

// Unit test inclusion
void redirect_all_std(void);

// Lib inclusions
char *convert_base_x_to_10(char *nbr, char *base);

char *convert_base_ten_to_x(char *nbr, char *base, int is_signed);

char *nbr_base_x_to_y(char *nbr, char *in_base, char *to_base, int is_signed);

char *convert_str_base(char *str, char *base);

int my_compute_power_rec(int nb, int p);

int skip_nb_base(char const *str, char const *base);

char *my_strcat(char *dest, char const *src);

char *concat_params(int argc, char **argv);

int my_compute_square_root(int nb);

int my_str_isanum(char const str);

int my_count_wrds(char const *str);

int my_is_prime(int nb);

int my_find_prime_sup(int nb);

int my_str_isalpha(char const *str);

long long my_getnbr(char const *str);

int my_isneg(int n);

unsigned long long my_put_nbr(signed long long int nb);

unsigned long long my_put_unnbr(unsigned long long int nb);

void my_putstr_error(char const *str);

char *my_revstr(char *str);

int my_show_word_array(char * const *tab);

void my_sort_int_array(int *tab, int size);

void comp_swap(int *tab, int i);

void my_swap(int *a, int *b);

int my_str_isalpha(char const *str);

int my_str_islower(char const *str);

int my_str_isnum(char const *str);

int my_str_isprintable(char const *str);

int my_str_isupper(char const *str);

char **my_str_to_word_array(char const *str);

int count_nb_words(char const *str, char *cpy_str);

int anum(char const str);

char *my_strdup(char const *);

void capitalizer_low(char *str, int i);

void capitalizer_up(char *str, int i);

char *my_strcapitalize(char *str);

int my_strcmp(char const *s1, char const *s2);

char *my_strcpy(char *dest, char *src);

char *my_strlowcase(char *str);

char *my_strncat(char *dest, char const *src, int nb);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strncpy(char *dest, char const *src, int n);

char strstr_compare(int n, char *str, char const *to_find);

char *my_strstr(char *str, char const *to_find);

char *my_strupcase(char *str);

void my_swap_test(int a, int b);

int my_strchr(char const *str, char c);

char *my_getnbr_str_base(char *str, char *base);

int my_atoi(char *str);

char *my_itoa(long long nb);

int my_strnum_cmp(char *s1, char *s2);

int my_isnum(char c);

char *rm_sign_minus(char *str);

int my_showstr(char const *str);

char *my_showstr_octal(char const *str);

int my_isprintable(char c);

int my_putchar(char c);

unsigned long long my_putstr(char const *str);

unsigned long long my_strlen(char const *str);

int op_flags(char const *str, int n, char c);

int *get_flag(char const *str, int n);

int invalid_flags_print(int *flags);

int print_params(int *flags, va_list params, int n, char const *str);

int skip_flag(char const *str, int n);

int can_print_invalid(char const *str, int n);

int my_printf(char const *str, ...);

int my_nbrlen(long long nb);

char *un_decimal(int * flags, va_list params);

char *un_octal(int * flags, va_list params);

char *un_binary(int * flags, va_list params);

char *un_hex(int * flags, va_list params);

char *un_hex_cap(int * flags, va_list params);

char *get_int(int *flags, va_list params);

char *get_char(int *flags, va_list params);

char *get_str(int *flags, va_list params);

char *get_showoctal(int *flags, va_list params);

char *get_pointer_hex(int *flags, va_list params);

int readjust_nb(int nb, int min, int max);

int *readjust_flags(int *flags, char *str);

char *sub_flags_cond(int *flags, va_list params, char *base);

unsigned long long my_getunnbr(char const *str);

int print_aligned(int *flags, char *str, int nb_printed);

char *my_unitoa(unsigned long long nb);

char *my_strndup(char const *src, int n);

char *my_allocat(char *dest, const char *src);