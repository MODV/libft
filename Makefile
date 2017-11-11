NAME	= libft.a
FLAG	= -Wall -Werror -Wextra -I. -c
SRC		= ft_toupper.c \
			ft_tolower.c \
			ft_islower.c \
			ft_isupper.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_iswhitespace.c 
			
OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	
$(OBJ): $(SRC)
	gcc $(FLAG) $(SRC)
	
$(SRC): copy
	
clean:
	rm -f $(OBJ)
	rm -f $(SRC)
	
fclean: clean
	rm -f $(NAME)
	
copy:
	cp -f source/*/*.c .
	
re: fclean all