#include "libft.h"

int	ft_countdigits(int n)
{
	if (n <= 9 && n >= -9)
		return (1);
	return (1 + ft_countdigits(n / 10));
}

char	*ft_itoa(int n)
{
	int		size;
	char	*number;

	size = ft_countdigits(n);
	if (n < 0)
		size++;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	number = (char *)ft_calloc(sizeof(char), size + 1);
	if (!number)
		return (0);
	if (!n)
		number[0] = '0';
	if (n < 0)
	{
		number[0] = '-';
		n = -n;
	}
	while (n)
	{
		number[--size] = n % 10 + '0';
		n = n / 10;
	}
	return (number);
}
