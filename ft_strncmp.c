#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while((s1[i] || s2[i]) && i < n)
	{
		if(s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return 0;
}

int main(void)
{
	char s1[] = "ABCDEF";
	char s2[] = "AZCDEF";
	unsigned int n = 3;
	int result = ft_strncmp(s1, s2, n);
	printf("return : %d\n", result);
}
