#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
public:
	Contact(const std::string& firstName,
			const std::string& lastName,
			const std::string& nickName,
			const std::string& phoneNumber,
			const std::string& darkestSecret)
			: _firstName(firstName), _lastName(lastName), _nickName(nickName), _phoneNumber(phoneNumber), _darkestSecret(darkestSecret) {}
	Contact(void) ;
	void	setFirstName(const std::string& firstName);
	void	setLastName(const std::string& lastName);
	void	setNickName(const std::string& nickName);
	void	setPhoneNumber(const std::string& phoneNumber);
	void	setDarkestSecret(const std::string& darkestSecret);


	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickName(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkestSecret(void);
private:
	std::string	_firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif