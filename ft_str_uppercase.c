#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int i;
	
	i = 0;
	if(str[0] == '\0')
	{
		return 1;
	}
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			return 1;
		}
		else
		{
			return 0;
		}
		i++;
	}
}

int main(void)
{
	char str[] = "HELLO WORLD";
	int result = ft_str_is_uppercase(str);
	printf("return : %d\n", result);
}
