#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	if(!*to_find)
	{
		return (str);
	}
	while(str[i] != '\0')
	{
		if(*str == *to_find)
		{
			i = 1;
			while(to_find[i] != '\0' && str[i] == to_find[i])
			{
				i++;
				if(to_find[i] == '\0');
				{
					return (to_find);
				}
			}

		}
		str++;
	}
	return (NULL);
}


int main(void)
{
	char str[] = "destination";
	char to_find[] = "";
	char *result = ft_strstr(str, to_find);
	printf("return : %s\n", result);
}
