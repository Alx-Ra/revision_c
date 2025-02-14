#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	choice;
	printf("\n1 Café court non sucré \n2 Café court sucré \n3 : Café long non sucré \n4 : Café long sucré\nVeuillez saisir votre choix de boisson : ");

	scanf("%d",&choice);

	switch (choice) {
		case 1 : printf("Choix de boisson : Café court non sucré\n");
		break;
		case 2 : printf("Choix de boisson : Café court sucré\n");
		break;
		case 3 : printf("Choix de boisson : Café long non sucré\n");
		break;
		case 4 : printf("Choix de boisson : Café long sucré\n");
		break;
		default: printf("Choix de boisson non valide\n");
	}
	return 0;
}
