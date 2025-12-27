NAME = phonebook

all: $(NAME)

$(NAME): Contact.o PhoneBook.o main.o
	c++ -std=c++98 Contact.o PhoneBook.o main.o -o $(NAME)

%.o: %.cpp
	c++ -c -Wall -Wextra -Werror -std=c++98 $?

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf *.o

re: fclean all

.PHONY: all re clean fclean
