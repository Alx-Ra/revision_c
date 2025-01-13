#include<stdio.h>

int	ft_strlen(char *str)
{
	int i; 

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;

	i = 0;
	while(src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

int main(void)
{
	char dest[20] = "destin";
	char src[] = "destination";
	unsigned int size = 20;

	unsigned int result = ft_strlcpy(dest, src, size);

    printf("After copying:\n");
    printf("Source string: %s\n", src);
    printf("Destination string: %s\n", dest);
    printf("Length of source: %u characters\n", result);
}
