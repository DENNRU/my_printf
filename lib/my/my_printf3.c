/*
** EPITECH PROJECT, 2022
** my_printf3.c
** File description:
** my_printf3.c
*/

#include "../../include/my.h"
#include <string.h>
#include <errno.h>
int my_printf_state1(const char *format, int *w, struct params *param);
int my_printf_state2(const char *format, int *w, struct params *param);

int my_printf_put6(char ch, va_list *list, struct params *param)
{
    switch (ch) {
    case 'm':
        my_putstr(strerror(errno));
        break;
    default:
        return 84;
    }
    return (0);
}

int my_printf3(const char *format, struct params *param, int state, int *w)
{
    switch (state) {
    case 1:
        state = my_printf_state1(format, w, param);
        break;
    case 2:
        state = my_printf_state2(format, w, param);
        break;
    default:
        state = 1;
        break;
    }
    return state;
}
