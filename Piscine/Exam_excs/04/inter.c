
#include <unistd.h>

int	checkdouble(char *str, int pos, char a)
{
	pos--;
	while (str[pos])
	{
		if (str[pos] == a)
			return (1);
		pos--;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	
	j = 0;
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][j])
	{
		i = 0;
		while (av[2][i])
		{
			if (av[2][i] == av[1][j])
			{
				if (checkdouble(av[1], j, av[1][j]) != 1)
				{
					write(1, &av[1][j], 1);
					break ;
				}
			}
			i++;
		
		}
		j++;
	}
	write(1, "\n", 1);
}
