#include "libft.h"

char	*ft_strncat(char *dst, char *src, int nb)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (dst[size])
		size++;
	while (i < nb && src[i])
	{
		dst[size] = src[i];
		size++;
		i++;
	}
	dst[size] = '\0';
	return (dst);
}
