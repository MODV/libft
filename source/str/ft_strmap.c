#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	tmp = ft_strdup(s);
	while (tmp[i])
	{
		tmp[i] = (*f)(tmp[i]);
		i++;
	}
	return (tmp);
}
