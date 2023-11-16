#include "stdlib.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	char s[] = "tripouille";
	printf("%s\n", ft_strchr(s, 't' + 256));
	return (1);
}
