#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	int nb;
	printf("Combien de livres avez vous?\n");
	scanf("%d",&nb);
	if(nb == 0 || nb == 1)
	{
		printf("Vous possedez %d livre", nb);
	}
	else
	{
		printf("Vous possedez %d livres", nb);
	}
	return 0;
}
