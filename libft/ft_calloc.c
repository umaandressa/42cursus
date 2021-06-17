#include "libft.h"

void	*ft_calloc(size_t itens, size_t size)
{
	void	*ptr;

	ptr = malloc(itens * size);
	if (!ptr)
		return (malloc (itens));
	ft_bzero(ptr, itens * size);
	return (ptr);
}
