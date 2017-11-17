#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *n)
{
	n->next = *alst;
	*alst = n;
}
