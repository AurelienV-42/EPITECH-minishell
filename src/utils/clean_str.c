/*
** EPITECH PROJECT, 2018
** clear_str
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include <stdlib.h>
#include "my.h"

char **cut_str(char **str)
{
	char **av = NULL;

	if ((*str == NULL) || (av = my_str_to_word_array(*str, ' ')) == NULL)
		return (NULL);
	free(*str);
	*str = my_strcpy(av[0]);
	return (av);
}

static char *parse(char *str)
{
	int i;

	if (str[0] == '\0')
		return (str);
	for (i = 0; str[i] == ' ' || str[i] == '\t' || str[i] == '\n'; i++);
	if (i == my_strlen(str))
			return (NULL);
	for (int nb = my_strlen(str) - 1; str[nb] == ' '
		|| str[nb] == '\t'; nb--)
		str[nb] = '\0';
	return (str);
}

char *clean_str(char *str)
{
	int i = 0;
	int n = 0;
	char *str2 = malloc(sizeof(char) * my_strlen(str) + 1);

	if (str2 == NULL || str == NULL || (str = parse(str)) == NULL)
		return (NULL);
	for (i = 0; str[i] == ' ' || str[i] == '\t'; i++);
	for (i = i; str[i] != '\0'; i++, n++) {
		if (str[i] == ' ' || str[i] == '\t') {
			str2[n] = ' ';
			n++;
			for (; str[i] == ' ' || str[i] == '\t'; i++);
		}
		str2[n] = str[i];
	}
	free(str);
	str2[n] = '\0';
	return (str2);
}
