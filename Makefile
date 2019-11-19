##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Aurélien Vandaële <aurelien.vandaele@epitech.eu>
##

SRC	=	src/main.c			\
		src/exec/exec.c			\
		src/exec/error_exec.c		\
		src/exec/command.c		\
		src/exec/my_access.c		\
		src/utils/clean_str.c		\
		src/utils/get_next_line.c	\
		src/builtins/my_cd.c		\
		src/builtins/builtins.c		\
		src/builtins/my_setenv.c	\
		src/builtins/my_unsetenv.c

NAME	=	mysh

OBJ	=	$(SRC:.c=.o)

COMPIL	=	-lmy -Llib/my

CFLAGS	=	-W -Wall -Wextra -I include/

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C lib/my
		gcc -o $(NAME) $(OBJ) $(COMPIL)

clean:
		make clean -C lib/my
		rm -f $(OBJ)

fclean:		clean
		make fclean -C lib/my
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean
