#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
    size_t  i;
    size_t  j;
    
    i = 0;
    j = 0;
    while (dst[i] && i < n)
        i++;
    while (src[j] && (i + j + 1) < n)
    {
        dst[i + j] = src[j];
        j++;
    }
    if (i < n)
        dst[i + j] = '\0';
    return (i + ft_strlen(src));
}