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
	src/read_and_display_txt/get_txt.c

CFLAGS	=	-I include

OBJ	=	$(SRC:.c=.o)

WARNINGS	=	-Wall -Wextra

NAME	=	bsq

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(WARNINGS)

all:    $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

