/*
** EPITECH PROJECT, 2017
** Library : my_strcpy
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include <stdlib.h>
#include "my.h"

char *my_strcpy(char const *src)
{
	char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}