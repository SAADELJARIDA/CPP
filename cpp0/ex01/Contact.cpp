#include "Contact.hpp"

Contact::Contact(void) : _firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _darkestSecret("") {}

void	Contact::setFirstName(const std::string&	firstName)
{
	_firstName = firstName;
}

void	Contact::setLastName(const std::string&	lastName)
{
	_lastName = lastName;
}

void	Contact::setNickName(const std::string&	nickName)
{
	_nickName = nickName;
}

void	Contact::setPhoneNumber(const std::string&	phoneNumber)
{
	_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(const std::string&	darkestSecret)
{
	_darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName(void)
{
	return _firstName;
}

std::string	Contact::getLastName(void)
{
	return _lastName;
}

std::string	Contact::getNickName(void)
{
	return _nickName;
}

std::string	Contact::getPhoneNumber(void)
{
	return (_phoneNumber);
}

std::string	Contact::getDarkestSecret(void)
{
	return _darkestSecret;
}