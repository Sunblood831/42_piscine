#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nb_stock;

	nb_stock = nb;
	if (nb_stock < 0)
	{
		ft_putchar('-');
		nb_stock *= -1;
	}
	if (nb_stock > 9)
	{
		ft_putnbr(nb_stock / 10);
		ft_putchar(nb_stock % 10 + '0');
	}
	else
		ft_putchar(nb_stock % 10 + '0');
}
