#include<stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while(src[j] != '\0')
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
	char *result = ft_strcat(dest, src);

	printf("return : %s\n", result);
}
