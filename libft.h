#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>

/*                  SYMBOL                */

int         ft_islower(int c);
int         ft_isupper(int c);
int         ft_isalnum(int c);
int         ft_isalpha(int c);
int         ft_isascii(int c);
int         ft_isdigit(int c);
int         ft_isprint(int c);
int         ft_tolower(int c);
int         ft_toupper(int c);
int         ft_iswhitespace(int c);

/*                  PUT                    */

void        ft_putchar(char c);
void        ft_putchar_fd(char c, int fd);
void	    ft_putendl(char const *str);
void	    ft_putendl_fd(char const *str, int fd);
void	    ft_putnbr(int n);
void	    ft_putnbr_fd(int n, int fd);
void	    ft_putstr(char const *str);
void	    ft_putstr_fd(char const *str, int fd);

/*                  STR                    */

size_t      ft_strlen (char const *str);

/*                  CONVERT                */

int         ft_atoi(const char *str);

#endif