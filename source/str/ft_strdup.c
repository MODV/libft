#include "libft.h"

char    *ft_strdup(const char *s)
{
    int     i;
    int     len;
    char    *tmp;
    
    i = 0;
    len = ft_strlen(s);
    tmp = (char *)malloc(len + 1);
    while (s[i])
    {
        tmp[i] = s[i];
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}