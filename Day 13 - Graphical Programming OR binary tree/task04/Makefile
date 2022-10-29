##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC = task04.c \

OBJ = $(SRC:.c=.o)

NAME = task04

All: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -I/usr/local/include/ -L/usr/local/lib -lcsfml-window -lcsfml-graphics

clean : 
			rm -f *.o

fclean :
	        rm -f *.o
	        rm -f *.a
	        rm -f ../*.a

re : fclean all
