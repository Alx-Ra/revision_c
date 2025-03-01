#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	int	i;
	int	indice;
	char	T1 [] = {'a', 'e', 'i', 'o', 'u', 'y'};

	for (i=0; i<sizeof(T1)/sizeof(char); i++)
	{
		printf("%c\t", T1[i]);
	}
	printf("\nSaisissez une indice");
	scanf("%d", &indice);
	printf("Resultat: %c\n", T1[indice]);
	return 0;
}	
