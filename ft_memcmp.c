#include "libft.h"

int	ft_memcmp (const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*st1;
	unsigned char	*st2;

	i = 0;
	st1 = (unsigned char *)s1;
	st2 = (unsigned char *)s2;
	if (s1 == s2 || n == 0)
		return (0);
	while (i < n)
	{
		if (*st1 != *st2)
			return (*st1 - *st2);
		st1++;
		st2++;
		i++;
	}
	return (0);
}
