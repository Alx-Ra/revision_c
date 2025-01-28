#include<stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i = 1;
	int j = 1;

	if(nb < 0)
	{
		return 0;
	}
	else if(nb == 0 || nb == 1)
	{
		return 1;
	}
	while(i <= nb)
	{
		j = j * i;
		i++;
	}
	return (j);
}

int main(void)
{
	int nb = 5;
	int result = ft_iterative_factorial(nb);
	printf("return: %d\n", result);
}

