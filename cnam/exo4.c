#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	a;
	int	b;
	printf("Saisissez un entier a:");
	scanf("%d",&a);
	printf("Saisissez un entier b:");
	scanf("%d",&b);
	(b < a) ? printf("L'entier le plus grand est:%d\n", a) : printf("L'entier le plus grand est: %d\n", b);
	return 0;
}
