/*
** EPITECH PROJECT, 2018
** Library : my_strcat_va
** File description:
** my_strcat with variadic
*/

#include <stdarg.h>
#include <stdlib.h>
#include "my.h"

char *my_strcat_va(int nb_args, ...)
{
	va_list list;
	char *str = NULL;
	char *tmp = NULL;

	va_start(list, nb_args);
	str = my_strdup(va_arg(list, char *));
	for (int i = 1; i < nb_args; i++) {
		tmp = str;
		str = my_strcat(str, va_arg(list, char *));
		free(tmp);
	}
	va_end(list);
	return (str);
}
