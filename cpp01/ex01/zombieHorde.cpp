#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "Invalid number of Zombies" << std::endl;
		return NULL;
	}

	Zombie* Z = new Zombie[N];
	for (int i = 0; i < N ; i++)
		Z[i].setName(name);

	return (Z);
}