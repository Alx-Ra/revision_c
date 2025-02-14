#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	int i;
	int cpt = 0;
	for(i = 0; i <= 100; i++)
	{
		printf("%d-", i*4);
		cpt++;
		if(cpt == 10)
		{
			printf("\n");
			cpt = 0;
		}
	}
	return 0;
}


