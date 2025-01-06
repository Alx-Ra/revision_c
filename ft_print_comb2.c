#include<unistd.h>

void execution(int i, int j)
{
	char resultat[7];

	resultat[0] = '0' + (i / 10);
	resultat[1] = '0' + (i % 10);
	resultat[2] = ' ';
	resultat[3] = '0' + (j / 10);
	resultat[4] = '0' + (j % 10);
	resultat[5] = ',';
	resultat[6] = ' ';
	if (i == 98)
	{
		write(1, resultat, 5);
	}
	else
	{
		write(1, resultat, 7);
	}
}

void ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			execution(i, j);
			j++;
		}
		i++;
	}
}

int main(void)
{
	ft_print_comb2();
}
