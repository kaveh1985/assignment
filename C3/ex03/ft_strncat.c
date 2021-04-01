/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 09:11:28 by abensett          #+#    #+#             */
/*   Updated: 2021/03/22 09:35:00 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned	int	i;
	unsigned	int	s;

	i = 0;
	s = 0;
	while (dest[s])
		s++;
	while (src[i] && i < nb)
	{
		dest[s] = src[i];
		i++;
		s++;
	}
	dest[s] = '\0';
	return (dest);
}
