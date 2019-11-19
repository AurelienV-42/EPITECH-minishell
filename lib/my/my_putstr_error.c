/*
** EPITECH PROJECT, 2017
** Library : my_putstr
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include <unistd.h>
#include "my.h"

int my_putstr_error(char const *str)
{
	write (2, str, my_strlen(str));
	return (84);
}
