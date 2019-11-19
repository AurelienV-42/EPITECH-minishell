/*
** EPITECH PROJECT, 2018
** Library : my_strlen_array
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include <stddef.h>

int my_strlen_array(char **str)
{
	int i;

	for (i = 0; str[i] != NULL; i++);
	return (i);
}
