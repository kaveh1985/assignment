

#include <unistd.h>

char	g_combi[11];
int		g_ligne[10];
int		g_diaggauche[19];
int		g_diagdroite[19];
int		g_nbsolu;

void	ft_debut(void)
{
	int i;

	g_combi[10] = '\n';
	g_nbsolu = 0;
	i = 0;
	while (i <= 9)
	{
		g_ligne[i] = 0;
		i++;
	}
	i = 0;
	while (i <= 18)
	{
		g_diaggauche[i] = 0;
		g_diagdroite[i] = 0;
		i++;
	}
}

void	ft_dejapris(int lig, int col, int flag)
{
	g_ligne[lig] = flag;
	g_diaggauche[col + lig] = flag;
	g_diagdroite[col - lig + 9] = flag;
}

void	ft_remplissage(int col)
{
	int lig;

	if (col > 9)
	{
		write(1, g_combi, 11);
		g_nbsolu++;
	}
	lig = 0;
	while (lig <= 9)
	{
		if (!g_ligne[lig] && !g_diaggauche[col + lig]
				&& !g_diagdroite[col - lig + 9])
		{
			g_combi[col] = lig + '0';
			ft_dejapris(lig, col, 1);
			ft_remplissage(col + 1);
			ft_dejapris(lig, col, 0);
		}
		lig++;
	}
}

int		ft_ten_queens_puzzle(void)
{
	ft_debut();
	ft_remplissage(0);
	return (g_nbsolu);
}
