#include<stdio.h>

int	ft_recursive_factorial(int nb)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if(nb < 0)
	{
		return 0;
	}
	else if(nb == 0 || nb == 1)
	{
		return 1;
	}
	return(nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	int nb = 5;
	int result = ft_recursive_factorial(nb);
	printf("return : %d\n", result);
}
