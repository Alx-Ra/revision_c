#include<stdio.h>

int main(void)
{
	int i;
	int tab [11];
	for (i = 0; i <= 10; i++)
	{
		tab [i] = 5 * i;
	}
	for (i = 0; i <= 10; i++)
	{
		printf("%d\t", tab[i]);
	}
	return 0;
}
