#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (*dst == '\0' && *src == '\0')
		return (0);
	while (size > i + 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (size)
		dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
