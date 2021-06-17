#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*retorno;

	retorno = dest;
	if (!dest && !src)
		return (0);
	if (src >= dest)
	{
		while (n--)
			*(char *)dest++ = *(char *)src++;
	}
	else
	{
		src += n;
		dest += n;
		while (n--)
			*(char *)--dest = *(char *)--src;
	}
	return (retorno);
}
