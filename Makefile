NAME	= libft.a
FLAG	= -Wall -Werror -Wextra -I. -c
SRC		= ft_putchar.c \
			ft_putstr.c \
			ft_strlen.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_islower.c \
			ft_isupper.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_iswhitespace.c \
			ft_atoi.c \
			ft_strcat.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_strncpy.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_bzero.c

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