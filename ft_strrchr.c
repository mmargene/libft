#include "libft.h"

char	*ft_strrchr (const char *s, int c)
{
	int	i;
	int	r;

	i = 0;
	r = -1;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			r = i;
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	if (r != -1)
		return ((char *)s + r);
	return (NULL);
}
