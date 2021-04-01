/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 10:07:48 by abensett          #+#    #+#             */
/*   Updated: 2021/03/31 14:41:09 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (base[i] == '-' || base[i] == '+' || base[i] == ' '
			|| (base[i] >= 9 && base[i] <= 13))
			return (0);
		i++;
	}
	return (i);
}

int		ft_in_base2(char a, char *base)
{
	int i;

	i = -1;
	while (base[++i])
		if (a == base[i])
			return (i);
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int integer;
	int sign;
	int lenb;

	lenb = 0;
	while (base[lenb])
		lenb++;
	if (ft_verif_base(base))
	{
		i = 0;
		integer = 0;
		sign = 1;
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i++] == '-')
				sign *= -1;
		}
		while (ft_in_base2(str[i], base))
			integer = integer * lenb + ft_in_base2(str[i++], base);
		return (sign * integer);
	}
	return (0);
}
