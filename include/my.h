/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** include for library for my_printf
*/

#include <stdarg.h>
#pragma once

struct params {
    char flag[256];
    char width[256];
};

int my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb, struct params *param);
char *my_itoa(int nb, char *str, int base, int caps);
int my_get_noinfzero1(va_list *list, int base, int caps);
char *my_ptoa(unsigned long long nb, char *str, int base, int caps);
int my_get_noinfzero2(va_list *list, int base, int caps, struct params *param);
int my_putstroctal(char const *str);
int my_atoi(char *str);
int my_printf(const char *format, ...);
