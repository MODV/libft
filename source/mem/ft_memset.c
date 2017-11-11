#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
    size_t  i;
    char    *ptr;
    
    i = 0;
    ptr = str;
    while (i < n)
    {
        ptr[i] = c;
        i++;
    }
    return (str);
}