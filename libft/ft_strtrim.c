#include "libft.h"

static int	ft_checkset(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*s2;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1);
	while (*start && ft_checkset(*start, set))
		start++;
	while (end > start && ft_checkset(*(end - 1), set))
		end--;
	len = end - start + 1;
	s2 = malloc(len);
	if (!s2)
		return (0);
	ft_strlcpy(s2, start, len);
	return (s2);
}
