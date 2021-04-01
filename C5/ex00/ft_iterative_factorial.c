

int	ft_iterative_factorial(int nb)
{
	int i;
	int j;

	i = 0;
	j = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		i++;
		j *= i;
	}
	return (j);
}
