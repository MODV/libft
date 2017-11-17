#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char *it;

	it = s1;
	while (*it != '\0')
		it++;
	while (*s2 != '\0')
		*it++ = *s2++;
	*it = '\0';
	return (s1);
}