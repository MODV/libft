#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp_d;
	unsigned char	*tmp_s;
	int				i;

	i = 0;
	tmp_d = (unsigned char *)dst;
	tmp_s = (unsigned char *)src;
	while (n)
	{
		tmp_d[i] = tmp_s[i];
		if (tmp_s[i] == (unsigned char)c)
			return (&((char *)tmp_d)[i + 1]);
		i++;
		n--;
	}
	return (NULL);
}
