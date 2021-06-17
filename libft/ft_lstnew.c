#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*item;

	item = (t_list *)ft_calloc(sizeof(t_list), 1);
	if (!item)
		return (NULL);
	item->content = content;
	item->next = 0;
	return (item);
}
