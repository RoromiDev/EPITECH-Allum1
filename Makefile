##
## Makefile for make in /home/deguer_r/iconofsin_2015
##
## Made by Romain Deguerville
## Login   <deguer_r@epitech.net>
##
## Started on  Tue Nov 17 11:36:08 2015 Romain Deguerville
## Last update Wed Feb 10 19:33:30 2016
##

CC		=	gcc

NAME		=	allum1

FLAG		=	-I./include \
			-W -Werror -Wall -Wextra

SRC		=	./src/main.c \
			./src/init.c \
			./src/error.c \
			./src/aff.c \
			./src/my_putchar.c \
			./src/my_putstr.c \
			./src/my_xor.c \
			./src/my_putbinary.c \
			./src/my_put_nbr.c \
			./src/player1.c \
			./src/my_getnbr.c \
			./src/remove_allum.c \
			./src/computer.c \
			./src/get_next_line.c
OBJ		=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
					$(CC) $(OBJ) $(FLAG) -o $(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.c.o:
	gcc -c $< -o $@ $(FLAG)
