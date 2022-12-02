SRC = *.c

NAME = libft

all: $(NAME)

$(NAME):
	cc -Werror -Wextra -Wall $(SRC) -o $(NAME)

clean:
	rm *.o

fclean: clean
	rm $(NAME)

re: fclean all
