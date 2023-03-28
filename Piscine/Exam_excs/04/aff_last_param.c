
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (ac == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (av[i])
		i++;
	i--;
	while (av[i][j])
	{
		write(1, &av[i][j], 1);
		j++;
	}
	write(1, "\n", 1);
}
