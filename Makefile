NAME=libft.a
CFLAGS = -Wall -Wextra -Werror
OBJ = *.o


all: $(NAME)

$(NAME):$(OBJ)
	gcc $(CFLAGS) -c *.c
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
