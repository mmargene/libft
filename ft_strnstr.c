#include "libft.h"

char	*ft_strnstr (const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nlen;
	size_t	hlen;
	char	*h;

	i = 0;
	h = (char *)haystack;
	hlen = ft_strlen(haystack);
	nlen = ft_strlen(needle);
	if (!nlen)
		return (h);
	if (hlen < nlen || len < nlen)
		return (NULL);
	while (h[i] && i <= len - nlen)
	{
		j = 0;
		while (needle[j] && needle[j] == h[i + j])
			j++;
		if (j == nlen)
			return (&h[i]);
		i++;
	}
	return (NULL);
}
