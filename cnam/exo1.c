#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	float note;
	printf("entrez votre note :\n");
	scanf("%f",&note);

	if(note >= 10)
	{
		printf("Vous avez la moyenne!\n");
	}
	return 0;
}
