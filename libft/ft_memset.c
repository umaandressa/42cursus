#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	void	*s2;

	s2 = s;
	while (n > 0)
	{
		*(char *)s = (unsigned char)c;
		n--;
		s++;
	}
	return (s2);
}
