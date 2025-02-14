#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	int YEAR;
	printf("Saisissez l'année\n");
	scanf("%d",&YEAR);
	if((YEAR % 4 == 0 && YEAR % 100 != 0) || (YEAR % 400 == 0))
	{
		printf("Année bissextile");
	}
	else
	{
		printf("Année non bissextile");
	}
	return 0;
}
