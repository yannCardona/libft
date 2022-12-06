SRC = *.c
OBJ = $(SRC:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(SRC)
	cc -Werror -Wextra -Wall -c $(SRC)
	ar -rc $(NAME) $(OBJ)

clean:
	-rm -f $(OBJ)

fclean: clean
	-rm -f $(NAME)

re: fclean all
