

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;

	i = ac - 1;
	while (i > 0)
	{
		while (*av[i])
		{
			write(1, &*av[i], 1);
			av[i]++;
		}
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
