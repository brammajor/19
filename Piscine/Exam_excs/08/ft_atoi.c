
#include <stdio.h>

int	atoi(char *str)
{
	int	i = 0;
	int	sign = 1;
	int	nb = 0;
	
	while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	nb *= sign;
	printf("%i", nb);
	return (nb);
}
	
int	main()
{
	char *str = "   -789123wowwwwooow";

	atoi(str);
}
