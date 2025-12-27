#include <iostream>

int main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << "---- Memory addresses:" << std::endl;

	std::cout << "Memory of string: " << &string << std::endl
			  <<"Memory of stringPTR: " << stringPTR << std::endl
			  <<"Memory of stringREF: " << &stringREF << std::endl;

	std::cout << "\n---- Values:" << std::endl;

	std::cout << "Value of string: " << string << std::endl
			  <<"Value of stringPTR: " << *stringPTR << std::endl
			  <<"Value of stringREF: " << stringREF << std::endl;
}