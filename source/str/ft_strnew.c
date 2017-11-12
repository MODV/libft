#include "libft.h"

void	*ft_strnew(size_t size)
{
    char    *set;
    
    if (!(set = (char *)malloc(size + 1)))
        return (NULL);
    ft_memset(set, '\0', size + 1);
    return (set);
}