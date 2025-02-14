#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	float alpha;
	float beta;
	printf("Saisissez le reel alpha:\n");
	scanf("%f",&alpha);
	printf("Saisisez le ree beta:\n");
	scanf("%f",&beta);
	if(alpha > 0 && beta > 0)
	{
		printf("Bravo, vous avez gagner!\n");
	}
	else
	{
		printf("Perdu!\n");
	}
	return 0;
}
