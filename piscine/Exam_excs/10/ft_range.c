
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	*arr;
	int	size = (end - start) + 1;
	int	i = 0;	

	arr = malloc(sizeof(int) * size + 1);
	if (arr == NULL)
		return (NULL);
	printf("%i\n", size);
	while (i < size)
	{
		arr[i] = start + i;
		printf("%i", arr[i]);
		printf(" ");
		i++;
	}
	arr[i] = '\0';
	return (&arr[0]);
}

#include <stdio.h>

int	main()
{
	int	i = 6;
	int	j = 26;
	ft_range(i, j);
}
