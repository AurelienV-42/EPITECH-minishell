/*
** EPITECH PROJECT, 2017
** Main
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include <signal.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "minishell.h"

static void prompt(void)
{
	char *str_pwd = NULL;
	char *str_last = NULL;
	int first;
	int len = 0;

	str_pwd = getcwd(str_pwd, 4096);
	for (first = my_strlen(str_pwd); str_pwd[first] != '/'; first--, len++);
	len--;
	first++;
	str_last = malloc(sizeof(char) * (len + 1));
	for (int i = 0; str_pwd[first] != '\0'; i++, first++)
		str_last[i] = str_pwd[first];
	str_last[len] = '\0';
	my_printf("%s > ", str_last);
	free(str_last);
	free(str_pwd);
}

static int my_shell(shell_t *shell)
{
	char *str = NULL;
	int return_value = 0;

	signal(SIGINT, SIG_IGN);
	do {
		if (my_strcmp(str, "exit") == 1) {
			my_putstr("exit\n");
			free(str);
			return (0);
		}
		return_value = command(str, shell);
		if (return_value == 84)
			return (84);
		if (isatty(0) == 1)
			prompt();
	} while ((str = get_next_line(0)) != NULL);
	if (isatty(0) == 1)
		my_putstr("exit\n");
	return (return_value);
}

int main(int ac, char **av __attribute__((__unused__)), char **env)
{
	shell_t shell;
	int return_value = 0;

	shell.env = env;
	shell.str_path = NULL;
	shell.is_symbol = 0;
	if (ac != 1)
		return (my_putstr_error("Too much arguments!\n"));
	return_value = my_shell(&shell);
	return (return_value);
}
