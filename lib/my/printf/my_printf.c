/*
** EPITECH PROJECT, 2017
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
** File description:
** my_printf
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

typedef int (*function)(void *param);

static int stock_to_value(char stock)
{
	int i = 0;
	char *str = "csdi%oxXupbSmnaefghjklqrtvwyzABCDEFGHIJKLMNOPQRTUVWYZ";

	while (str[i] != stock)
		i++;
	return (i);
}

static function *init_tab(void)
{
	function *tab = malloc(sizeof(function) * 12);

	if (tab == NULL)
		return (NULL);
	tab[0] = (function)&my_putchar_printf;
	tab[1] = (function)&my_putstr_printf;
	tab[2] = (function)&my_putnbr_printf;
	tab[3] = (function)&my_putnbr_printf;
	tab[4] = (function)&my_putchar_percentage;
	tab[5] = (function)&my_putnbr_octal_printf;
	tab[6] = (function)&my_putnbr_hexa_down_printf;
	tab[7] = (function)&my_putnbr_hexa_up_printf;
	tab[8] = (function)&my_putunsignednbr_printf;
	tab[9] = (function)&my_putnbr_hexa_ptr_printf;
	tab[10] = (function)&my_putnbr_binary_printf;
	return (tab);
}

static int loop(char *str, int *i, va_list list, function *tab)
{
	int c = 0;
	char stock;
	int nb;

	if (str[*i] == '%') {
		stock = str[++(*i)];
		(*i)++;
		nb = stock_to_value(stock);
		if (nb > 10)
			return (84);
		tab[nb](list);
		if (c < 0) {
			free(tab);
			return (c);
		}
	} else {
		my_putchar(str[*i]);
		(*i)++;
		c++;
		return (c);
	}
	return (0);
}

int my_printf(char *str, ...)
{
	int i = 0;
	int c = 0;
	va_list list;
	function *tab = init_tab();

	if (tab == NULL)
		return (84);
	va_start(list, str);
	while (str && str[i]) {
		c = loop(str, &i, list, tab);
		c+= c;
	}
	free(tab);
	va_end(list);
	return (c);
}
