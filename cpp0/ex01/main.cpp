#include <iostream>
#include "Contact.hpp"

Contact creatContact(void);

namespace cli
{
	void printWelcome()
	{
		std::cout << "Hello To A Crappy Awesome PhoneBook" << std::endl;
		std::cout << "Type: " << std::endl;
		std::cout << "ADD save a new contact" << std::endl;
		std::cout << "SEARCH to display a specific contact" << std::endl;
		std::cout << "EXIT to exit. The program quits and the contacts are lost forever!" << std::endl;
		std::cout << "__________________________________________________________________\n"
				  << std::endl;
	}
	std::string input(std::string message)
	{
		std::string input;

		std::cout << message;
		if (!std::getline(std::cin, input))
			return "";

		const std::size_t begin = input.find_first_not_of(" \t\n\v\f");
		const std::size_t end = input.find_last_not_of(" \t\n\v\f");
		if (begin == std::string::npos || end == std::string::npos)
			return "";
		return input.substr(begin, end - begin + 1);
	}

	int	isValid(std::string command)
	{
		if (command == "ADD")
		{
			Contact newContact = creatContact();
		}
		else if (command == "SEARCH")
		{

		}
		else if(command == "EXIT")
		{
			return false;
	}
		else
			std::cout << "\n'" << command << "'" << " INVALID COMMAND !\n" << std::endl;
		return (1);
	}
}

void	getInfo(const std::string& message)
{
	std::string info = cli::input(message);
	while (info.empty())
	{
		std::cout << "Invalid " << message << std::endl;
		info = cli::input(message);
		return ;
	}
}

Contact creatContact(void)
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	getInfo("First Name");
	getInfo("Last Name");
	getInfo("Nick Name");
	getInfo("Phone Number");
	getInfo("Darkest Secret");

	return Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
}


int main()
{
	cli::printWelcome();	
	while (cli::isValid(cli::input("Enter a Command: ")));

	return (0);
}
