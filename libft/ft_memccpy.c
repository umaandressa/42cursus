#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n > 0)
	{
		*(char *)dest++ = *(char *)src;
		if (*(unsigned char *)src++ == (unsigned char)c)
			return (dest);
		n--;
	}
	return (0);
}
