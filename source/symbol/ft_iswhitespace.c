#include "libft.h"

int	ft_iswhitespace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' ||
			c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}
