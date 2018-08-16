#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);

int	ft_rand(int min, int max)
{
	unsigned int	nb;
	
	nb = time(NULL);
	nb = (15 * nb + 3) % 231;
	while (nb < min || nb > max)
		nb = (15 * nb + 3) % 231;	
	return (nb);
}

int	main(int argc, char *argv[])
{
	unsigned int	test;
	int		index;
	int		min;
	int		max;

	min = 65;
	max = 122;
	index = 0;
	index = argv[1][0] - '0';

	test = ft_rand(min, max);
	while (index-- > 0)
	{
		test = ft_rand(min, max);
		ft_putchar(test);
	}
	ft_putchar('\n');
	return (0);
}
