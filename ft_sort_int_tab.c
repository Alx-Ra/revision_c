#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int j;
	int k;

	j = 0;
	while(j < size - 1)
	{
		k = 0;
		while(k < size - j - 1)
		{
			if(tab[k] > tab[k + 1])
			{
				ft_swap(&tab[k], &tab[k + 1]);
			}
			k++;
		}
		j++;
	}
}

int main(void)
{
    int tab[] = {5, 8, 6, 4, 9};
    int size = 5;

    printf("Tableau avant tri : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    ft_sort_int_tab(tab, size);

    printf("Tableau après tri : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
