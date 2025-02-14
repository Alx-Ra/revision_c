#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	a;
	int	b;
	printf("Saisissez un entier a:\n");
	scanf("%d",&a);
	printf("Saisissez un entier b:\n");
	scanf("%d",&b);

	if(b<a)
	{
		printf("L'entier le plus grand est: %d\n", a);
	}
	else
	{
		printf("L'entier le plus grand est: %d\n", b);
	}
	return 0;
}
