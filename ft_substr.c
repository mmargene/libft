#include "libft.h"

char	*ft_substr (char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	ni;
	char	*str;

	i = 0;
	ni = 0;
	if ((start + len) > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	if (start > ft_strlen(s))
		return (ft_strdup (""));
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && ni < len)
		{
			str[ni] = s[i];
			ni++;
		}
		i++;
	}
	str[ni] = 0;
	return (str);
}
