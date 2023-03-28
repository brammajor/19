#include <unistd.h>
#include <stdio.h>

int 	main(void)
{
	int	i;

	char 	str[] = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";

	i = 0;
	
	if (str[i + 8] == '1')
                if (str[(i + 2) % 8] == '3')
                        if (str[(i + 4) % 8] == '2')
                                if (str[(i + 6) % 8] == '1')
                                      if (str[((i + 2) % 8) + 8] == '2')
                                                if (str[((i + 4) % 8) + 8] == '2')
                                			if (str[((i + 6) % 8) + 8] == '2') 
	
							write(1, "c", 1);
	return (0);
}
