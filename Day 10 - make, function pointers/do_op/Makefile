##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC = main.c \


OBJ = $(SRC:.c=.o)

NAME = do-op

all: $(NAME)

$(NAME): $(OBJ)	
			gcc -o $(NAME) $(OBJ)

clean :
			rm *~ .o

fclean:
			rm *~ .o

re : fclean all
