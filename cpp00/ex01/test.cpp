#include <iostream>

void	inc(int& x)
{
	x++;
}

typedef struct s_Str
{
private:
	int	a;
	int	b;
public:
	int	sum(int x, int y)
	{
		return x + y;
	}
}t_Str;

class First
{
private:
	int	a;
	int	b;
public:
	int	sum(int x, int y)
	{
		return x + y;
	}
};

int	main(void)
{
	First	first;
	t_Str	str;
	srd::string	str;

	std::cin >> str;
 	return (0);
}
