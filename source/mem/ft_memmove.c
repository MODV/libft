#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = ft_memcpy(ft_strnew(len), src, len);
	while (i < len)
	{
		((char *)dst)[i] = ((char *)tmp)[i];
		i++;
	}
	return (dst);
}
