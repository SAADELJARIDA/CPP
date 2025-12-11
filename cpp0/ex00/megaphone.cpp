#include <iostream>

std::string upper(std::string str)
{
	int	i;

	for(i = 0; str[i]; i++)
		str[i] = std::toupper(static_cast<unsigned char>(str[i]));
	return (str);
}

int main(int ac, char **av)
{
	int i;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	i = 1;
	for (i = 1; av[i]; i++)
		std::cout << upper(av[i]); 
	std::cout << std::endl;
}
