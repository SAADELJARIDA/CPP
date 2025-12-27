#include "Zombie.hpp"

Zombie::Zombie() {}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << ": Dead" << std::endl;
}

void Zombie::setName(std::string name)
{
	_name =  name;
}