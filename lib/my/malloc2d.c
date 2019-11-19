/*
** EPITECH PROJECT, 2017
** Library : malloc2d
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include <stdlib.h>
#include "my.h"

char **malloc2d(unsigned int columns, unsigned int lines)
{
	char **result = malloc(sizeof(char *) * lines + 1);

	if (result == NULL)
		return (NULL);
	for (unsigned int i = 0; i != lines; i++) {
		result[i] = malloc(sizeof(char) * columns + 1);
		if (result[i] == NULL)
			return (NULL);
		result[i][columns] = '\0';
	}
	return (result);
}
