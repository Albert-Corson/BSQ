##
## EPITECH PROJECT, 2018
## BSQ_2018
## File description:
## makefile
##

SRC	=	src/main.c	\
	src/bsq.c	\
	src/check_for_sqr.c	\
	src/read_and_display_txt/display_txt.c	\
	src/read_and_display_txt/format_check.c	\
	src/read_and_display_txt/get_txt.c

CFLAGS	=	-I include

OBJ	=	$(SRC:.c=.o)

WARNINGS	=	-Wall -Wextra

NAME	=	bsq

$(NAME):	$(OBJ)
	make -C./lib/my/
	gcc -o $(NAME) $(OBJ) $(WARNINGS) -L./lib/my/ -lmy

all:    $(NAME)

clean:
	make clean -C./lib/my/
	rm -f $(OBJ)

fclean:	clean
	make fclean -C./lib/my/
	rm -f $(NAME)

re:	fclean all

