
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
	int	i = 0;
	int	j = 0;
	
	if (ac != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[1][i])
	{
		if (checkdouble(av[1], i, av[1][i]) != 1)
			write(1, &av[1][i], 1);
		i++;
	}
	while (av[2][j])
	{
		if (checkdouble(av[1], i, av[2][j]) != 1 && checkdouble(av[2], j, av[2][j]) != 1)
			write(1, &av[2][j], 1);
		j++;
	}
	write(1, "\n", 1);
}
