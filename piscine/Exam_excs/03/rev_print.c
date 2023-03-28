
#include <unistd.h>

char	*rev_print(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	i--;
	while (str[i])
	{
		write(1, &str[i], 1);
		i--;
	}
	write(1, "\n", 1);
	return (str);
}

int	main()
{
	char	*str = "0123456789";
	
	rev_print(str);
}
