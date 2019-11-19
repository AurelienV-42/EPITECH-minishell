/*
** EPITECH PROJECT, 2022
** PSU_minishell2_2017
** File description:
** Created by Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#ifndef PSU_MINISHELL2_2017_SHELL_H
#define PSU_MINISHELL2_2017_SHELL_H

typedef struct shell
{
	char **env;
	char *str_path;
	int is_symbol;
}shell_t;

#endif //PSU_MINISHELL2_2017_SHELL_H
