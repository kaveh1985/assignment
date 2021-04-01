/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramzanz <mramzanz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:46:12 by mramzanz          #+#    #+#             */
/*   Updated: 2021/03/30 17:52:37 by mramzanz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 65 || str[i] > 90))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_str_is_numeric(char c)
{
	if ((c < 48 || c > 57))
		return (0);
	return (1);
}

int		ft_is_alpha(char c)
{
	if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	ft_strlowcase(str);
	if (ft_is_alpha(str[0]))
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if (!ft_is_alpha(str[i - 1]))
		{
			if (ft_is_alpha(str[i]))
				if (!ft_str_is_numeric(str[i - 1]))
					str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}