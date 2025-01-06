#include<unistd.h>

void execution(int a, int b, int c)
{
	char resultat[5];
	
	resultat[0] = '0' + a;
	resultat[1] = '0' + b;
	resultat[2] = '0' + c;
	resultat[3] = ',';
	resultat[4] = ' ';
	if (a == 7)
	{
		write(1, resultat, 3);
	}
	else
	{
		write(1, resultat, 5);
	}
}
void ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				execution(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

int main(void)
{
	ft_print_comb();
}




