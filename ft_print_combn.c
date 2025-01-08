#include<unistd.h>

void compteur(int rank, int nbrank, int start, char *tab)
{
	int i;
	i = start;
	while (i <= 9 - (nbrank - rank) + 1)
	{
		tab[rank] = i + '0';
		if (rank == nbrank - 1)
		{
			write(1, tab, nbrank);
			if (tab[0] != '9' - nbrank + 1)
                        write(1, ", ", 2);
		}
		else
		{
			compteur(rank + 1, nbrank, i + 1, tab);
		}
		i++;
	}
}

void ft_print_combn(int n)
{
	char tabchar[9];
	compteur(0, n, 0, tabchar);
}

int main(void)
{
	ft_print_combn(5);
	return 0;
}
