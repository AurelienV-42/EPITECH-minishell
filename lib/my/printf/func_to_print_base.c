/*
** EPITECH PROJECT, 2017
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
** File description:
** my_printf
*/

#include "my.h"

int my_putnbr_octal_printf(va_list list)
{
	my_putnbr_base(va_arg(list, int), "01234567");
	return (0);
}

int my_putnbr_hexa_up_printf(va_list list)
{
	my_putnbr_base(va_arg(list, int), "0123456789ABCDEF");
	return (0);
}

int my_putnbr_hexa_down_printf(va_list list)
{
	my_putnbr_base(va_arg(list, int), "0123456789abcdef");
	return (0);
}

int my_putnbr_hexa_ptr_printf(va_list list)
{
	int i = va_arg(list, long int);

	my_putstr("0x");
	my_putnbr_base(i, "0123456789abcdef");
	return (0);
}

int my_putnbr_binary_printf(va_list list)
{
	my_putnbr_base(va_arg(list, int), "01");
	return (0);
}
