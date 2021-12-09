#include "libft.h"

char	*ft_strdup (const char *s1)
{
	size_t	slen;
	size_t	i;
	char	*s2;

	slen = ft_strlen(s1);
	i = 0;
	s2 = malloc (sizeof(char) * (slen + 1));
	if (!s2)
		return (NULL);
	while (i <= slen)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
