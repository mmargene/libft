#include "libft.h"

void	*ft_memccpy (void *d, const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(d + i) = *(unsigned char *)(s + i);
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return (d + (++i));
		i++;
	}
	return (NULL);
}
