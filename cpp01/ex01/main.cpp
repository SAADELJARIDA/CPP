#include "Zombie.hpp"

int main()
{
	Zombie *Z = zombieHorde(4, "sel-jari"); 

	for (int i = 0; i < 4 ; i++)
		Z[i].announce();

	delete[] Z;
}