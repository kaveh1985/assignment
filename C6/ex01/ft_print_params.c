/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abensett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 11:10:52 by abensett          #+#    #+#             */
/*   Updated: 2021/03/22 11:38:08 by abensett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac)
	{
		while (*av[i])
		{
			write(1, &*av[i], 1);
			av[i]++;
		}
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
