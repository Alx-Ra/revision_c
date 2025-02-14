#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	int	i;
	int	table;
	printf("Quelle table voulez vous?");
	scanf("%d",&table);

	for(i = 0; i <= 10; i++)
	{
		printf("%d*%d = %d\n", i, table, i*table);
	}
	return 0;
}
