#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list*))
{
	t_list	*result;
	t_list	*tmp;
	t_list	*data;

	if (!lst || !f)
		return (NULL);
	data = (*f)(lst);
	if ((result = ft_lstnew(data->content, data->content_size)))
	{
		tmp = result;
		lst = lst->next;
		while (lst)
		{
			data = (*f)(lst);
			if (!(tmp->next = ft_lstnew(data->content, data->content_size)))
				return (NULL);
			tmp = tmp->next;
			lst = lst->next;
		}
	}
	return (result);
}
