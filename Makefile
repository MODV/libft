NAME	= libft.a
FLAG	= -Wall -Werror -Wextra -std=c99 -I. -c
SRC		= ft_toupper.c \
			ft_tolower.c \
			ft_islower.c \
			ft_isupper.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_iswhitespace.c \
			ft_putchar.c \
			ft_putchar_fd.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_putstr.c \
			ft_putstr_fd.c \
			ft_atoi.c \
			ft_itoa.c \
			ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_bzero.c \
			ft_memalloc.c \
			ft_memcpy.c \
			ft_memdel.c \
			ft_memset.c \
			ft_strlen.c \
			ft_strdup.c
			
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