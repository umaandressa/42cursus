#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!len)
		return (0);
	s3 = malloc(len);
	if (!s3)
		return (0);
	ft_strlcpy(s3, s1, len);
	ft_strlcat(s3, s2, len);
	return (s3);
}
