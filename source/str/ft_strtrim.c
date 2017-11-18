#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	l;
	char	*tmp;

	if (s)
	{
		i = 0;
		j = 0;
		l = ft_strlen(s);
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		tmp = (char *)ft_memalloc(sizeof(char) * (l - i));
		while (s[l] == ' ' || s[l] == '\t' || s[l] == '\n')
			l--;
		while (i < l)
			tmp[j++] = s[i++];
		tmp[j] = '\0';
		return (tmp);
	}
	return (NULL);
}
