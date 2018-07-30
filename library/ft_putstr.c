#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		ft_putchar(src[i]);
}
