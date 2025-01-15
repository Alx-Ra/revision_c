#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while(src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char dest[20] = "dest";
	char src[] = "source";
	unsigned int n = 4;
	char *result = ft_strncat(dest, src, n);
	printf("Return : %s\n", result);
}

