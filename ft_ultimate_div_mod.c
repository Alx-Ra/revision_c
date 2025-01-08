#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int i;

	i = *a / *b;
	*b = *a % *b;
	*a = i;
}

int main(void)
{
	int a = 7;
	int b = 2;

	ft_ultimate_div_mod(&a, &b);

	printf("Division : a = %d\n", a);
	printf("Modulo : b = %d\n", b);
	return 0;
}
