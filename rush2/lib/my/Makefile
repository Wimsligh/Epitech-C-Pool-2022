##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC =     ../../step1.c \
          my_putchar.c \
	  my_put_nbr.c \
	  my_putstr.c \
	  my_strlen.c\

OBJ = $(SRC:.c=.o)

NAME = step

all: $(NAME)

$(NAME): $(OBJ)
			gcc $(NAME) $(OBJ)

clean :
			rm *~ .o

fclean: 
			rm *~ .o
			rm *~ .a
			rm ../*.a

re: fclean all
