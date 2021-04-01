/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramzanz <mramzanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:18:49 by mramzanz          #+#    #+#             */
/*   Updated: 2021/03/30 17:43:29 by mramzanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int		i;
	int		j;
	char	*stra;

	stra = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	i = 0;
	j = 0;
	while (str[i])
	{
		while (stra[j])
		{
			if (str[i] == stra[j])
				break ;
			if (stra[j] == 'Z')
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
