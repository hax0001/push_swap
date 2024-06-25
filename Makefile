NAME = push_swap

LIBFT_DIR = Libft

LIBFT = libft.a

LIBFT_OUTPUT = $(LIBFT_DIR)/$(LIBFT)

FILES = creat_stack.c \
		push_swap.c \

OFILS = $(FILES:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OFILS) $(LIBFT)
	$(CC) $(FLAGS) $(OFILS) $(LIBFT) -o $(NAME)

$(OFILS):
	$(CC) $(FLAGS) $(FILES)

$(LIBFT):
	make -C $(LIBFT_DIR)
	mv $(LIBFT_OUTPUT) .

clean:
	make clean -C $(LIBFT_DIR)
	rm -f $(OFILS)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	rm -f $(NAME)
	rm -f $(PUSH_SWAP_DIR)/$(LIBFT)

re: fclean all
