#include "libft.h"

char    *ft_strcat(char *dst, const char *src)
{
    int     i;
    int     len;
    
    i = 0;
    len = ft_strlen(dst);
    while (src[i])
    {
        dst[len] = src[i];
        i++;
        len++;
    }
    dst[i] = '\0';
    return (dst);
}