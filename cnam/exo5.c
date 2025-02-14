#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	int	a;
	int	b;
	printf("Saisissez un entier a: ");
	scanf("%d",&a);
	printf("Saisissez un entier b: ");
	scanf("%d",&b);
	if(a == b)
	{
		printf("Les deux entier sont égaux\n");
	}
	else if(a > b)
	{
		printf("L'entier le plus grand est: %d\n", a);
	}
	else
	{
		printf("L'entier le plus grand est : %d\n", b);
	}
	return 0;
}
