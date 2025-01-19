#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

int	ft_base(char *base)
{
	int i;
	int j;

	i = 0;
	if(ft_strlen(base) < 2)
	{
		return 0;
	}
		while(base[i + 1] != '\0')
		{
			j = i + 1;
			while(base[j] != '\0')
			{
				if(base[i] == base[j] || base[i] == '+' 
				|| base[i] == '-' || base[j] == '+' 
				|| base[j] == '-' || base[i] == ' ' || base[j] == ' ')
				{
					return 0;
				}
				j++;
			}
			i++;
		}
		return 1;
}
void    ft_putnbr_base(int nbr, char *base)
{
	int nb;

        if (nbr == 0)
        {
                ft_putchar(base[0]);
                return ;
        }
        nb = (long int)nbr;
        if (!ft_base(base))
                return ;
        if (nb < 0)
        {
                ft_putchar('-');
                nb = -nb;
        }
        if (nb != 0)
	{
    		if (nb / ft_strlen(base) != 0)
		{
        		ft_putnbr_base(nb / ft_strlen(base), base);
		}
    		ft_putchar(base[nb % ft_strlen(base)]);
	}
}

int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
}

