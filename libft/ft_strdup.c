#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;
	size_t	size;
	size_t	i;

	size = ft_strlen(s);
	sdup = malloc (size + 1);
	if (!sdup)
		return (0);
	i = 0;
	while (size--)
		sdup[i++] = *s++;
	sdup[i] = 0;
	return (sdup);
}
