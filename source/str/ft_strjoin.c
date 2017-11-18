#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if ((str = (char *)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	str = ft_strcpy(str, s1);
	return (ft_strcat(str, s2));
}