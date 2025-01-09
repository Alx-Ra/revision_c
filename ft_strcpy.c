#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char src[] = "Hello";
	char dest[] = "World";
	printf("Avant copie : %s\n", src);
	printf("Avant copie : %s\n", dest);
	ft_strcpy(dest, src);
	printf("Après copie : %s\n", src);
	printf("Après copie : %s\n", dest);
}
