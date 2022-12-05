SRC = *.c

NAME = libft.a

all: $(NAME)

$(NAME): $(SRC)
	cc -Werror -Wextra -Wall -c $^
	ar -rc $(NAME) $(wildcard *.o)

clean:
	-rm -f *.o

fclean: clean
	-rm -f $(NAME)

re: fclean all
