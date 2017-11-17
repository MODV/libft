#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		if (dest[i] == '\0')
			break ;
		i++;
	}
	return (dest);
}
