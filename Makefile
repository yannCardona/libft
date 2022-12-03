SRC = *.c

NAME = libft

all: $(NAME)

$(NAME):
	cc -Werror -Wextra -Wall $(SRC) -o $(NAME)

clean:
	-rm -f *.o

fclean: clean
	-rm -f $(NAME)

re: fclean all
