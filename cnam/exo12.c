#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	int	i;
	int	j;
	printf("Saisissez le premier nombre:\n");
	scanf("%d",&i);
	printf("Saisissez le deuxième nombre :\n");
	scanf("%d",&j);
	if(i > j)
	{
		printf("%d\n", i*i);
	}
	else
	{
		printf("%d\n", j*j*j);
	}
	return 0;
}
