/*
** EPITECH PROJECT, 2017
** Library : my_strlen
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

int my_strlen(char const *str)
{
	int i;

	for (i = 0; str && str[i]; i++);
	return (i);
}
