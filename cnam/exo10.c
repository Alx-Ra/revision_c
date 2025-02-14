#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	float alpha;
	float beta;
	printf("Saisissez le reel alpha:\n");
	scanf("%f",&alpha);
	printf("Saisissez le reel beta:\n");
	scanf("%f",&beta);

	if((alpha > 0 && beta < 0) || (alpha < 0 && beta > 0))
	{
		printf("Gagner!");
	}
	else
	{
		printf("Perdu!");
	}
	return 0;
}
