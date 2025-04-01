#include<stdio.h>
#include<stdlib.h>

int main(void)
{
        int i;
        int tab [] = {1, 13, 45, 57, 234, 450};
        int value;
        int indice = 0;
        int flag = 0;

        i = 0;

        for (i = 0; i < sizeof(tab)/sizeof(int); i++)
        {
                printf("%d ", tab[i]);
        }

        printf("\nSaisissez une valeur: ");
        scanf("%d", &value);
        for (i = 0; i < sizeof(tab)/sizeof(int); i++)
        {
                if (tab[i] == value)
                {
                        indice = i;
                        flag++;
                        break;
                }
	}
		
		if (flag == 0)
                {
                        printf("valeur non trouvées");
                }
                else
                {
                        printf("Rang: %d", ++indice);
                }
        return 0;
}

