CC=gcc
CFLAGS=-Wall -Wextra -Werror

CFILES= srcs/ft_addition.c srcs/ft_atoi.c srcs/ft_division.c srcs/ft_do_op.c srcs/ft_modulo.c srcs/ft_multiplacation.c srcs/ft_putnbr.c srcs/ft_substraction.c
OBJECTS=$(CFILES:.c=.o)

NAME=do-op

all: $(NAME)

$(NAME):$(OBJECTS)
	$(CC) -o $@ $^

%.o:%.c do_op.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) *.o

fclean:clean
	$(RM) $(NAME)

re:fclean all
	
