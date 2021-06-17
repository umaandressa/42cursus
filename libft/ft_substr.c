#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return ((char *)ft_calloc(sizeof(char), 1));
	if (len > ft_strlen (s + start))
		sub = (char *)ft_calloc(sizeof(char), ft_strlen(s + start) + 1);
	else
		sub = (char *)ft_calloc(sizeof(char), ++len);
	if (!sub)
		return (0);
	ft_strlcpy(sub, s + start, len);
	return (sub);
}
