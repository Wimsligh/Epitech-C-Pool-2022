##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

SRC = my_compute_factorial_it.c \
	  my_compute_factorial_rec.c \
	  my_compute_power_it.c \
	  my_compute_power_rec.c \
	  my_compute_square_root.c \
	  my_evil_str.c \
	  my_find_prime_sup.c \
	  my_getnbr.c \
	  my_isneg.c \
	  my_is_prime.c \
	  my_print_alpha.c \
	  my_print_digits.c \
	  my_print_revalpha.c \
	  my_putchar.c \
	  my_put_nbr.c \
          my_putstr.c \
	  my_putstr.c \
	  my_revstr.c \
	  my_showmen.c \
	  my_showstr.c \
	  my_sort_in_array.c \
	  my_strcapitalize.c \
	  my_str_issuper.c \
	  my_strlen.c \
	  my_strlowcase.c \
	  my_strncat.c \
	  my_strncpy.c \
	  my_strncmp.c \
	  my_strpy.c \
	  my_strstr.c \
	  my_strupcase.c \
	  my_swap.c \

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
			ar rc $(NAME) $(OBJ)
			cp libmy.a ../
			mkdir ../../include
			cp my.h ../../include/

clean :
			rm -f *~ .o

fclean:
			rm -f *~ .o
			rm -f *~ .a
			rm -f ../*.a

re: fclean all
