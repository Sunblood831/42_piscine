int	ft_atoi(char *src)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	while (src[i] == ' ' || (src[i] >= 9 && src[i] <= 13))
		++i;
	if (src[i] == '+' || src[i] == '-')
	{
		sign = -1 * (src[i] == '-') + (src[i] == '+');
		++i;
	}
	while (src[i] >= '0' && src[i] <= '9')
	{
		result = result * 10 + src[i] - '0';
		++i;
	}
	return (result);
}
