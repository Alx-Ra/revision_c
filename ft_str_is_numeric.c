#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if(str[0] == '\0')
	{
		return 1;
	}
	
	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
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
	char str[] = "23568";
	int result = ft_str_is_numeric(str);
	printf("return : %d\n", result);
}
