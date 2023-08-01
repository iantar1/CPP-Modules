#include <iostream>
#include <cctype>
#include <string>

int	main(int ac, char *av[])
{
	int		i;
	size_t	j;

	i = 0;
	if (ac < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (++i < ac)
	{
		j = 0;
		while (j < std::strlen(av[i]))
			std::cout << (char)toupper(av[i][j++]);
		if (i + 1 < ac)
			std::cout << " ";
	}
	std:: cout << "\n";
	return (0);
}