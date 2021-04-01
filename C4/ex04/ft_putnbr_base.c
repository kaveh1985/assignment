/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 10:07:40 by abensett          #+#    #+#             */
/*   Updated: 2021/03/31 14:40:46 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_verif_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		renvoi;
	int		lenb;
	long	nbr2;

	nbr2 = nbr;
	renvoi = 0;
	lenb = 0;
	if (ft_verif_base(base))
	{
		if (nbr2 < 0)
		{
			ft_putchar('-');
			nbr2 *= -1;
		}
		while (base[lenb])
			lenb++;
		if (nbr2 >= lenb - 1)
		{
			ft_putnbr_base(nbr2 / lenb, base);
			ft_putchar(base[nbr2 % lenb]);
		}
		else
			ft_putchar(base[nbr2]);
	}
}
