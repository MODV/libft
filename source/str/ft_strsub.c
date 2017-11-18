#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (s == NULL || start > ft_strlen(s))
		return (NULL);
	tmp = (char *)ft_memalloc(sizeof(char) * (len + 1));
	while (i < len && s[start] != '\0')
		tmp[i++] = s[start++];
	tmp[i] = '\0';
	return (tmp);
}
