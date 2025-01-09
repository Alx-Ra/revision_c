
#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if(str[0] == '\0')
	{
		return 1;
	}

	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
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
	char str[] = "hello world";
	int result = ft_str_is_lowercase(str);
	printf("return : %d\n", result);
}
