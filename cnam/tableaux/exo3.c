#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i;
	char tab [6] = {'a', 'e', 'i', 'o', 'u', 'y'};
	int indice;

	for (i = 0; i < 6; i++)
	{
		printf("%c, ", tab[i]);
	}
	printf("\nSaisissez un indice: ");
	scanf("%d", &indice);
	printf("Resultat: %c", tab[indice]);

	return 0;
}
