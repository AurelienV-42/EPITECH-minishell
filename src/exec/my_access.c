/*
** EPITECH PROJECT, 2022
** PSU_minishell2_2017
** File description:
** Created by Aurélien Vandaele <aurelien.vandaele@epitech.eu>
*/

#include <stdlib.h>
#include <unistd.h>
#include "s_shell.h"
#include "my.h"

static int exec_of_access(char **array_path, char *str, shell_t *shell)
{
	char *str_p;

	for (int i = 0; array_path && array_path[i] != NULL; i++) {
		str_p = my_strcat_va(3, array_path[i], "/", str);
		if (access(str_p, X_OK) == 0) {
			shell->str_path = my_strcpy(str_p);
			free(str_p);
			return (i);
		}
		free(str_p);
	}
	return (-1);
}

int my_access(char *str, shell_t *shell)
{
	static char **array_path = NULL;
	int n_path;
	int return_value;

	for (n_path = 0; shell->env[n_path] != NULL && (my_strncmp(
		"PATH=", shell->env[n_path], 5) != 1); n_path++);
	if (n_path == my_strlen_array(shell->env)
		|| shell->env[n_path][5] == '\0')
		return (-1);
	array_path = my_str_to_word_array(&shell->env[n_path][5], ':');
	if (array_path == NULL)
		return (-2);
	return_value = exec_of_access(array_path, str, shell);
	if (return_value != -1)
		return (return_value);
	return (-1);
}