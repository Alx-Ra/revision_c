#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	int i;
	printf("Saisir un nombre inferieur ou egal à 100\n");
	scanf("%d",&i);

	while(i > 100)
	{
		printf("Saisir un nombre inferieur ou egal à 100\n");
		scanf("%d",&i);
	}

	printf("Bravo, %d <= 100!", i);
	return 0;
}	
