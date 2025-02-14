#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	int nb;
	printf("Combien avez vous de livres?\n");
	scanf("%d",&nb);
	printf("Vous possedez %d livre%c", nb, (nb == 0 || nb == 1) ? ' ' : 's');
	return 0;
}
