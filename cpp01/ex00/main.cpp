#include "Zombie.hpp"

int main()
{
	Zombie* Z = newZombie("amine");
	Z->announce();
	delete Z;

	randomChump("saad");
	randomChump("alex");
}