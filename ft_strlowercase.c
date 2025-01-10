#include<stdio.h>

char	*ft_strlowercase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return(str);
}

int main(void)
{
	char str[] = "HelLO WORld";
	printf("Return : %s\n", ft_strlowercase(str));
}
