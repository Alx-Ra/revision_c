#include<stdio.h>

void ft_swap(int *a, int*b)
{
	int i; 

	i = *a;
	*a = *b;
	*b = i;
}

void ft_rev_int_tab(int *tab, int size)
{
	int j; 

	j = 0;
	while(j < size / 2)
	{
		ft_swap(&tab[j], &tab[size - j - 1]);
		j++;
	}
}

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Tableau avant inversion : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    ft_rev_int_tab(tab, size);

    printf("Tableau après inversion : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
