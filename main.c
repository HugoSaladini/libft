#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	main(void)
{
	char c;

	c = 'A';
	printf("char: '%c'\n", c);
	printf("ft_isalpha: %d | isalpha: %d\n", ft_isalpha(c), isalpha(c) != 0);
	printf("ft_isdigit: %d | isdigit: %d\n", ft_isdigit(c), isdigit(c) != 0);
	printf("ft_isalnum: %d | isalnum: %d\n\n", ft_isalnum(c), isalnum(c) != 0);

	c = '5';
	printf("char: '%c'\n", c);
	printf("ft_isalpha: %d | isalpha: %d\n", ft_isalpha(c), isalpha(c) != 0);
	printf("ft_isdigit: %d | isdigit: %d\n", ft_isdigit(c), isdigit(c) != 0);
	printf("ft_isalnum: %d | isalnum: %d\n\n", ft_isalnum(c), isalnum(c) != 0);

	c = '#';
	printf("char: '%c'\n", c);
	printf("ft_isalpha: %d | isalpha: %d\n", ft_isalpha(c), isalpha(c) != 0);
	printf("ft_isdigit: %d | isdigit: %d\n", ft_isdigit(c), isdigit(c) != 0);
	printf("ft_isalnum: %d | isalnum: %d\n", ft_isalnum(c), isalnum(c) != 0);

	return (0);
}
