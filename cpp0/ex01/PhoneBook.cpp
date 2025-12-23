#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

PhoneBook::PhoneBook() : _i(0)
{
	
}

void	PhoneBook::addContact(Contact c)
{
	if (_i >= 8)
		_i = 0;
	_contacts[_i] = c; 
	_i++;
}

std::string PhoneBook::_onlyTen(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(9);
		str += '.';
	}
	return (str);
}

int	PhoneBook::showPhonebook(void)
{
	if (_i == 0)
	{
		std::cout << "\nNo contacts in record. Please ADD a contact first ! \n" << std::endl;
		return 0;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	std::cout << "|   INDEX  |FIRST NAME| LAST NAME| NICKNAME |" << std::endl;
	for (int i = 0; i < _i; i++)
	{
		std::cout << "+----------+----------+----------+----------+" << std::endl
				  << "|" << std::setw(10) <<  i
				  << "|" << std::setw(10) << _onlyTen(_contacts[i].getFirstName())
				  << "|" << std::setw(10) << _onlyTen(_contacts[i].getLastName())
				  << "|" << std::setw(10) << _onlyTen(_contacts[i].getNickName())
				  << "|" << std::endl;
		// std::cout << "Darkest Secret: " << _contacts[i].getDarkestSecret() << std::endl;
	}
	std::cout << "+----------+----------+----------+----------+" << std::endl;

	return (1);
}

void	PhoneBook::showContact(void)
{
	if (_i == 0)
	{
		std::cout << "No contacts to display.\n" << std::endl;
		return ;
	}

	std::string	input;
	int			index = -1;

	while (true)
	{
		std::cout << "Enter the index of the contact to view: ";
		if (!std::getline(std::cin, input))
			return ;

		std::istringstream iss(input);
		if (!(iss >> index) || index < 0 || index >= _i)
		{
			std::cout << "\nInvalid index. Please enter a number between 0 and "
					  << _i - 1 << ".\n" << std::endl;
			continue ;
		}
		break ;
	}

	std::cout << "\nFirst Name: " << _contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << _contacts[index].getLastName() << std::endl;
	std::cout << "Nick Name: " << _contacts[index].getNickName() << std::endl;
	std::cout << "Phone Number: " << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << _contacts[index].getDarkestSecret() << "\n" << std::endl;
}