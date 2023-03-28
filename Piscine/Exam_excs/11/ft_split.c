
#include <stdlib.h>

int	wordcounter(char *str)
{
	int	i = 0;
	int	count = 0;

	while (str[i])
	{
		while (str[i] && str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != ' ' || (str[i] < 9 && str[i] > 13))
			i++;
	}
	return (count);
}

char	**ft_split(char *str)
{
	char	**array;
	int	i = 0;
	int	j = 0;
	int	size = wordcounter(str);

	array = malloc((sizeof char *) * (size + 1));
	while (	i <= size)
	{
		
