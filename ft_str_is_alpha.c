#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	 if (str[0] == '\0')
                {
                        return 1;
                }

	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
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
	char str[] = "Hello World";
	int result = ft_str_is_alpha(str);
	printf("Alphabetic? : %d\n", result);
}
