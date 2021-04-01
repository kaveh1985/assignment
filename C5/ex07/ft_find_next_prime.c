

int	ft_find_next_prime(int nb)
{
	int div;

	if (nb <= 2)
		return (2);
	if (!(nb % 2))
		nb++;
	div = 3;
	while (div <= nb / div)
	{
		if (!(nb % div))
		{
			nb += 2;
			div = 1;
		}
		div += 2;
	}
	return (nb);
}
