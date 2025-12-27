#include <iostream>

std::string upper(std::string str)
{
	for(int i = 0; str[i]; i++)
		str[i] = std::toupper(static_cast <unsigned int>(str[i]));
	return (str);
}

int main(int ac, char **av)
{
	if (ac == 1)
	{

		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; av[i]; i++)
		std::cout << upper(av[i]); 
	std::cout << std::endl;
}
