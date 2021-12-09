#include "libft.h"

char	*ft_strjoin (char const *s1, char const *s2)
{
	char	*new;
	size_t	i;
	size_t	len;

	i = 0;
	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2));
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (*s1 != '\0')
	{
		new[i] = *s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		new[i] = *s2++;
		i++;
	}
	new[i] = '\0';
	return (new);
}