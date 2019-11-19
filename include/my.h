/*
** EPITECH PROJECT, 2022
** PSU_tetris_2017
** File description:
** Created by Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#ifndef PSU_TETRIS_2017_LIBRARY_H
#define PSU_TETRIS_2017_LIBRARY_H

void my_putchar(char);
void my_putstr(char const *);
int my_putstr_error(char const *);
int my_strlen(char const *);
int my_strcmp(char const *, char const *);
int my_strncmp(char *, char *, int);
void my_putnbr(int);
char *my_strcat(char *, char *);
void my_free_array(char **);
char **malloc2d(unsigned int, unsigned int);
int my_atoi(char *);
char **my_str_to_word_array(char const *, char);
int my_strlen_array(char **);
int my_atoi(char *);
char *my_strcat_va(int, ...);
/* Printf */

#include <stdarg.h>

int my_printf(char *, ...);
char *my_strcpy(char const *);
char *my_strdup(char const *);
int my_putchar_printf(va_list);
int my_putstr_printf(va_list);
int my_putnbr_printf(va_list);
int my_putchar_percentage(va_list);
int my_putnbr_octal_printf(va_list);
int my_putnbr_hexa_up_printf(va_list);
int my_putnbr_hexa_down_printf(va_list);
int my_putnbr_base(int, char *);
int my_putunsignednbr_printf(va_list);
int my_putunsignednbr(int);
int my_putnbr_hexa_ptr_printf(va_list);
int my_putnbr_binary_printf(va_list);

#endif //PSU_TETRIS_2017_LIBRARY_H
