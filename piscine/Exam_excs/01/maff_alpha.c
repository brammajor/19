
#include <unistd.h>

int	main()
{
	char	a;
	char	b;
	
	a = 'a';
	b = 'B';
	while (a <= 'y' && b <= 'Z')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a += 2;
		b += 2;
	}
	write(1, "\n", 1);
}
