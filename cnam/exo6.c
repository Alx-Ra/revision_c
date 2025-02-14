#include<stdio.h>
#include<stdlib.h>

int	main(void)
{
	float note;
	printf("Saisissez votre note: \n");
	scanf("%f",&note);
	if(note >= 12)
	{
		printf("Bravo!\nAvec %2.f, vous êtes reçu avec mention!!\n", note);
	}
	else if(note >= 10)
	{
		printf("Bravo!\nAvec %2.f, vous êtes reçu\n", note);
	}
	else
	{
		printf("Désolé, vous n'êtes pas reçu\n");
	}
	return 0;
}
