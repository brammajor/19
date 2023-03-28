
#include <unistd.h>

void	print_numbers(void)
{
	write(1, "0123456789", 10);
}

int	main()
{
	print_numbers();
}
