#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int		i;
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	if (s1 == NULL && s2 == NULL)
		return (0);
	i = 0;
	while (ptr1[i] == ptr2[i] && i <= n)
	{
		i++;
		if (i == (unsigned int)n || (ptr1[i] == '\0' && ptr2[i] == '\0'))
			return (0);
	}
	return (ptr1[i] - ptr2[i]);
}