#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	float	i;
	float	j;
	float	VAR3;
	printf("Saisissez le reel i:\n");
	scanf("%f",&i);
	printf("Saisissez le reel j:\n");
	scanf("%f", &j);
	VAR3 = (i > j ? i : j);
	printf("VAR3 vaut %f\n", VAR3);
	return 0;
}
