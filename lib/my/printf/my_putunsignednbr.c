/*
** EPITECH PROJECT, 2018
** Library : my_putunsignednbr
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "my.h"

int my_putunsignednbr(int nb)
{
	int start;
	int end;

	if (nb < 0) {
		my_putunsignednbr(-nb);
	} else {
		end = nb % 10;
		start = nb / 10;
		if (start != 0)
			my_putunsignednbr(start);
		my_putchar(end + '0');
	}
	return (0);
}
