#include<stdio.h>

char	*ft_strcapitalize(char *str)
{
	int i;
	int maj;

	i = 0;
	maj = 1;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			if(maj == 1)
			{
				str[i] -= 32;
			}
		}
		if(!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= '0' && str[i] <= '9'))
		{
			maj = 1;
		}
		else
		{
			maj = 0;
		}
		i++;
	}
	return(str);
}

int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("return : %s\n", ft_strcapitalize(str));
}
