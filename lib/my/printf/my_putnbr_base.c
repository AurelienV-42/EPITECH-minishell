/*
** EPITECH PROJECT, 2017
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
** File description:
** Library : my_put_nbr_base
*/

#include "my.h"

int my_putnbr_base(int nb, char *base)
{
	int start;
	int end;

	if (nb < 0) {
		my_putchar('-');
		my_putnbr_base(-nb, base);
	} else {
		end = nb % my_strlen(base);
		start = nb / my_strlen(base);
		if (start != 0)
			my_putnbr_base(start, base);
		my_putchar(base[end]);
	}
	return (0);
}
