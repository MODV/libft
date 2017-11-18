#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len;
	char	*tmp;

	len = (ft_strlen(s1) + ft_strlen(s2));
	tmp = (char *)malloc(len + 1);
	i = 0;
	if (tmp)
	{
		while (*s1)
			tmp[i++] = *s1++;
		while (*s2)
			tmp[i++] = *s2++;
		tmp[i] = '\0';
	}
	return (NULL);
}
