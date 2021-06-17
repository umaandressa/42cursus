#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) + 1;
	while (i-- > 0)
	{
		if (*(s + i) == (unsigned char)c)
			return ((char *)s + i);
	}
	return (0);
}
