#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>

void    ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    *ft_memset(void *str, int c, size_t n);

void    ft_putchar(char c);
void    ft_putstr(char* str);

int     ft_strlen(char *str);
char    *ft_strcat(char *dst, const char *src);
char    *ft_strchr(const char *str, int c);
char	*ft_strcpy(char *dst, const char *src);
char    *ft_strdup(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
char    *ft_strncpy(char *dst, const char *src, size_t n);

int     ft_atoi(const char *str);

int     ft_islower(int c);
int     ft_isupper(int c);
int     ft_isalnum(int c);
int     ft_isalpha(int c);
int     ft_isascii(int c);
int     ft_isdigit(int c);
int     ft_isprint(int c);
int     ft_tolower(int c);
int     ft_toupper(int c);
int     ft_iswhitespace(int c);

int     ft_atoi(const char *str);

#endif