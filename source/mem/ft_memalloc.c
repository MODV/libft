#include "libft.h"

void	*ft_memalloc(size_t n)
{
	void    *ptr;

	ptr = malloc(n);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, n);
	return (ptr);
}
