#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	int	i;
	int	T[11];

	for(i = 0; i <= 10; i++)
	{
		T[i] = 5 * i;
	}

	for (i = 0; i <= 10; i++)
	{
		printf("%d\t",T[i]);
	}
	return 0;
}
