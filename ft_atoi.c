#include<stdio.h>

int	ft_isspace(char *c)
{

	if(*c == ' ' || *c == '\n' || *c == '\t' || *c == '\v' || *c == '\f' || *c == '\r')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int	ft_atoi(char *str)
{
	int i;
	int result;
	int sign;

	sign = 1;
	result = 0;
	i = 0;
	while(ft_isspace(&str[i]) == 1)
	{
		i++;
	}
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int main(void)
{
	char str[] = "     -+++-+--45686azerty567";
	int result = ft_atoi(str);
	printf("return : %d\n", result);
}
	
