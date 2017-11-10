NAME	= libft.a
FLAG	= -Wall -Werror -Wextra -I. -c
SRC		= ft_putchar.c \
			ft_strlen.c \
			ft_putstr.c

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
$(OBJ): $(SRC)
	gcc $(FLAG) $(SRC)
	
clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all