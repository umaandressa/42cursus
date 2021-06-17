#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*str;

	if (dest == 0 && src == 0)
		return (0);
	str = dest;
	while (n > 0)
	{
		*(char *)dest++ = *(char *)src++;
		n--;
	}
	return (str);
}
