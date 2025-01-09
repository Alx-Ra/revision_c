#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while(src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main(void)
{
	char	src[] = "Hello";
	char	dest[] = "World";
	unsigned int n = 4;
	printf("Avant copie : %s\n", src);
	printf("Avant copie : %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("Après copie : %s\n", src);
	printf("Après copie : %s\n", dest);
}
