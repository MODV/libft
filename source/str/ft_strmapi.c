#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	tmp = ft_strdup(s);
	while (tmp[i])
	{
		tmp[i] = (*f)(i, tmp[i]);
		i++;
	}
	return (tmp);
}
