#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

/*+++++SYMBOL------*/

int                 ft_islower(int c);
int                 ft_isupper(int c);
int                 ft_isalnum(int c);
int                 ft_isalpha(int c);
int                 ft_isascii(int c);
int                 ft_isdigit(int c);
int                 ft_isprint(int c);
int                 ft_tolower(int c);
int                 ft_toupper(int c);
int                 ft_iswhitespace(int c);

/*+++++++PUT-------*/

void                ft_putchar(char c);
void                ft_putchar_fd(char c, int fd);
void	            ft_putendl(char const *str);
void	            ft_putendl_fd(char const *str, int fd);
void	            ft_putnbr(int n);
void	            ft_putnbr_fd(int n, int fd);
void	            ft_putstr(char const *str);
void	            ft_putstr_fd(char const *str, int fd);

/*-------MEM--------*/

void                *ft_memset(void *str, int c, size_t n);
void                ft_bzero(void *s, size_t n);
void                *ft_memcpy(void *dest, const void *src, size_t n);
void	            *ft_memalloc(size_t n);
void	            ft_memdel(void **f);

/*-------STR-------*/

size_t              ft_strlen (char const *str);

/*-----CONVERT-----*/

int                 ft_atoi(const char *str);

/*+++++++LST-------*/

typedef struct      s_list
{
    void            *content;
    size_t          content_size;
    struct s_list   *next;
}                   t_list;

t_list				*ft_lstnew(const void *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *n);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif