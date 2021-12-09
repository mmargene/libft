#include "libft.h"

void	ft_putendl_fd (char *s, int fd)
{
	char	nl;

	nl = '\n';
	if (s)
	{
		write (fd, s, ft_strlen(s));
		ft_putchar_fd (nl, fd);
	}
}
