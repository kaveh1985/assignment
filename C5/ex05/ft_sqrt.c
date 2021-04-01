

int	ft_sqrt(int nb)
{
	int nb2;

	nb2 = 1;
	while (nb2 * nb2 < nb && nb2 < 46340)
		nb2++;
	if (nb2 * nb2 == nb)
		return (nb2);
	return (0);
}
