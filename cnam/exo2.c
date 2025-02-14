#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	float note;
	printf("Entrez votre note:\n");
	scanf("%f",&note);

	if(note == 10)
	{
		printf("Vous avez eu 10!\n");
	}
	else
	{
		printf("Vous n'avez pas eu 10!\n");
	}
	return 0;
}
