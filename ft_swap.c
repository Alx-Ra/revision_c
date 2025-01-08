#include<stdio.h>

void ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
	int i = 3;
	int j = 5;


	ft_swap(&i, &j);
	printf("Après l'échange : i = %d, j = %d\n", i, j);
	return 0;
}
