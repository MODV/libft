#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s != NULL && f != NULL)
	{
		j = ft_strlen(s);
		while (i < j)
		{
			(*f)(i, s);
			s++;
			i++;
		}
	}
}
