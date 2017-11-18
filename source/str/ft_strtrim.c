#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (s)
		if ((str = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
			return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	str = ft_strcpy(str, s);
	i = ft_strlen(str);
	while (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
		str[--i] = '\0';
	return (str);
}
