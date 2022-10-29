##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC = cat.c \

OBJ = $(SRC:.c=.o)

NAME = cat

all: $(NAME)

$(NAME): $(OBJ)
	make -C ../lib/my/
	gcc -o $(NAME) $(OBJ) -L../lib/my/ -lmy -g

clean :
			rm -f *~ .o

fclean:
			rm -f *.o
			rm -f *.a
			rm -f ../*.a

re: fclean all
