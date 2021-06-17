#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*temp1;
	char	*temp2;
	size_t	n_s2;

	if (!*s2)
		return ((char *)s1);
	n_s2 = ft_strlen(s2);
	if (!ft_strlen(s1) || n < n_s2)
		return (0);
	n -= --n_s2;
	while (n-- && *s1)
	{
		temp1 = (char *)s1;
		temp2 = (char *)s2;
		while (*temp2 && *temp1 == *temp2)
		{
			++temp1;
			++temp2;
		}
		if (*temp2 == 0)
			return ((char *)s1);
		++s1;
	}
	return (0);
}
