#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
public:
	void	addContact(Contact c);
	void	showPhonebook();

private:
	Contact	_contacts[8];
	
};

#endif