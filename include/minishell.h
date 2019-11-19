/*
** EPITECH PROJECT, 2018
** Library my.h
** File description:
** Aurélien Vandaële <aurelien.vandaele@epitech.eu>
*/

#include "s_shell.h"

#ifndef MY_H_
#define MY_H_

char *get_next_line(int fd);
char *clean_str(char *str);
char **cut_str(char **str);
int my_exec(char *str, char **av, shell_t *shell);
int my_builtins(char *str, shell_t *shell);
int my_cd(char *str, char **env);
int my_setenv(char **env, char *str);
int my_unsetenv(char **env, char *str);
int command(char *str, shell_t *shell);
int error_directory(char *str);
int error_directory_without_error(char *str);
int segfault_error(int status);
int is_a_slash(char *str);
int my_access(char *str, shell_t *shell);

#endif
