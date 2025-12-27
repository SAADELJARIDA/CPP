NAME = zombie

all: $(NAME)

$(NAME): main.o newZombie.o  randomChump.o  Zombie.o
	c++ -std=c++98 main.o newZombie.o  randomChump.o  Zombie.o -o $(NAME)

%.o: %.cpp
	c++ -c -Wall -Wextra -Werror -std=c++98 $?

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf *.o

re: fclean all

.PHONY: all re clean fclean
