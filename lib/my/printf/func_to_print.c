/*
** EPITECH PROJECT, 2017
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
** File description:
** my_printf
*/

#include "my.h"

int my_putchar_printf(va_list list)
{
	my_putchar(va_arg(list, int));
	return (0);
}

int my_putstr_printf(va_list list)
{
	my_putstr(va_arg(list, char *));
	return (0);
}

int my_putnbr_printf(va_list list)
{
	my_putnbr(va_arg(list, int));
	return (0);
}

int my_putchar_percentage(va_list list __attribute__((__unused__)))
{
	my_putchar('%');
	return (0);
}

int my_putunsignednbr_printf(va_list list)
{
	my_putunsignednbr(va_arg(list, int));
	return (0);
}
