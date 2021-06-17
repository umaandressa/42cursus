#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*dst && size > i)
	{
		i++;
		dst++;
	}
	while (size > i + 1 && *src)
	{
		*dst++ = *src++;
		i++;
	}
	if (i < size)
		*dst = '\0';
	while (*src++)
		i++;
	return (i);
}
