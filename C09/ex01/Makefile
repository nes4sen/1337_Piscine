#__Makfile__

CC=gcc
CFLAGS=-Wall -Wextra -Werror

CFILES=srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OBJECTS=$(CFILES:.c=.o)

LIB=includes/ft.h
NAME=libft.a

all: $(NAME)
	
$(NAME): $(OBJECTS)
	ar -r $@ $^

%.o:%.c $(LIB)
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
	
