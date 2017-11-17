#include "libft.h"

void	ft_memdel(void **f)
{
	free(*f);
	*f = (NULL);
}
