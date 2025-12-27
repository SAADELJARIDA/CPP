NAME = megaphone

all: $(NAME)

$(NAME): megaphone.o
	c++ -std=c++98 megaphone.o -o megaphone

megaphone.o: megaphone.cpp
	c++ -c -Wall -Wextra -Werror -std=c++98 megaphone.cpp

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf *.o

re: fclean all

.PHONY: all re clean fclean
