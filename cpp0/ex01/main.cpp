#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact creatContact(void);

bool unvalidNumber(const std::string& s)
{
    for (std::string::size_type i = 0; i < s.size(); ++i)
    {
        if (!std::isdigit(s[i]) && s[i] != '-' && s[i] != ' ')
			return true;
    }
    return false;
}

bool unvalidName(const std::string& s)
{
    for (std::string::size_type i = 0; i < s.size(); ++i)
    {
        if (!std::isalpha(s[i]) && s[i] != '-' && s[i] != ' ')
            return true;
    }
    return false;
}

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

		std::cout << message << ": ";
		if (!std::getline(std::cin, input))
			return "";

		const std::size_t begin = input.find_first_not_of(" \t\n\v\f");
		const std::size_t end = input.find_last_not_of(" \t\n\v\f");
		if (begin == std::string::npos || end == std::string::npos)
			return "";
		return input.substr(begin, end - begin + 1);
	}

	std::string	isValid(std::string command)
	{
		if (command != "ADD" && command != "SEARCH" && command != "EXIT")
		{
			std::cout << "\n'" << command << "'" << " INVALID COMMAND !\n" << std::endl;
			return ("");
		}
		return (command);
	}
}

std::string	getInfo(const std::string& message)
{
	std::string info;

	do
	{
		info = cli::input(message);
		if (info.empty())
			std::cout << "\nERROR: " << info <<  " Invalid " << message << "!!!\n" << std::endl;
		if (message == "Phone Number" && unvalidNumber(info))
		{
			std::cout << "\nERROR: " << info <<  " Invalid " << message << "!!!" << std::endl;
			std::cout << "Phone numbers can only contain digits, spaces and hyphens.\n" << std::endl;
			info.clear();
		}
		else if ((message != "Darkest Secret" && message != "Phone Number" && unvalidName(info)))
		{
			std::cout << "\nERROR: " << info <<  " Invalid " << message << "!!!" << std::endl;
			std::cout << "Names can only contain letters, spaces and hyphens.\n" << std::endl;
			info.clear();
		}

	}while (info.empty());
	return (info);
}

Contact creatContact(void)
{
	std::string firstName = getInfo("First Name");
	std::string lastName = getInfo("Last Name");
	std::string nickName = getInfo("Nick Name");
	std::string phoneNumber = getInfo("Phone Number");
	std::string darkestSecret = getInfo("Darkest Secret");

	return Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
}


int main()
{
	PhoneBook	phoneBook;
	std::string	command;
	cli::printWelcome();	


	while (true)
	{
		command = cli::input("Enter a Command");
		if (cli::isValid(command) == "")
			continue ;
		if (command == "ADD")
		{
			phoneBook.addContact(creatContact());
		}
		else if (command == "SEARCH")
		{
			if (phoneBook.showPhonebook())
				phoneBook.showContact();
		}
		else
		{
			std::cout << "GOOD BUY !" << std::endl;
			break ;
		}
	}

	return (0);
}
