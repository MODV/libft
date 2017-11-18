#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*pos;

	pos = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			pos = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	else
		return (pos);
}
