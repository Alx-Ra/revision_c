#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	int T1 [] = {'a', 'e', 'i', 'o', 'u', 'y'};
	int i;

	for(i = 0; i < 6; i++)
	{
		printf("%c\t", T1[i]);
	}
	return 0;
}

