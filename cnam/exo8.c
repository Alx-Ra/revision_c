#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	float alpha;
	printf("Saisissez le reel alpha: \n");
	scanf("%f",&alpha);
	alpha = ((alpha >= 0) ? alpha : -alpha);
	printf("valeur absolue: %f\n", alpha);
	return 0;
}
