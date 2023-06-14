##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile cs
##

SRC 	=	$(wildcard lib/my/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	 libmy.a

MY 	=	my.h

cflags  =	-wall -wextra -I. include o3

all:	$(NAME)

$(NAME):	$(OBJ) 
	ar rc $(NAME) $(OBJ)

clean:
	rm -f lib/my/*.o

fclean: clean
	rm -f $(NAME)

re:	clean	all
