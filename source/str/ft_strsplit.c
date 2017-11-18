#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char *dst;

	if (!(dst = (char*)malloc(sizeof(char) * (n + 1))))
		return (NULL);
	dst = ft_strncpy(dst, s1, n);
	dst[n] = '\0';
	return (dst);
}

static	int		ft_cutline(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i] == c && str[i] != '\0')
		i++;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i);
}

static	char	*ft_strclear(char *str, char c)
{
	char *str2;

	if (*str == '\0')
		return (str);
	while (*str == c && *str != '\0')
		str++;
	str2 = ft_strdup(str);
	return (str2);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;

	j = 0;
	if (s == NULL || c == 0)
		return (NULL);
	if (!(res = (char **)malloc(sizeof(char*) * (ft_strlen(s) + 1))))
		return (NULL);
	if (!s || !c)
		ft_bzero(*res, ft_cutline(s, c));
	res[ft_strlen(s)] = NULL;
	while (*s != '\0')
	{
		i = ft_cutline(s, c);
		res[j] = ft_strndup(s, i);
		res[j] = ft_strclear(res[j], c);
		if (res[j][0] == '\0')
			res[j++] = 0;
		s += i;
		j++;
	}
	return (res);
}