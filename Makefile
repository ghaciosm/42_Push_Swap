NAME = libft.a
LIBFT = libft

all: $(NAME)
	gcc -Wall -Werror -Wextra *.c  $(NAME) -o push_swap

$(NAME): $(LIBFT)
	make -C $(LIBFT)
	cp libft/libft.a .

clean:
	make clean -C $(LIBFT)

fclean: clean
	make fclean -C $(LIBFT)
	rm -f $(NAME)
	rm -rf push_swap
