#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
public:
	PhoneBook(void);
	void	addContact(Contact c);
	int		showPhonebook(void);
	void	showContact(void);

private:
	Contact	_contacts[8];
	int		_i;	

	std::string	_onlyTen(std::string str);
	bool	contains_alpha(const std::string& s);
};

#endif