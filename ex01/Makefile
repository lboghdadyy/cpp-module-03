CPP = c++ -Wall -Wextra -Werror -std=c++98
RM=rm -rf
SOURCES = ClapTrap.cpp main.cpp ScavTrap.cpp
OBJECTS = $(SOURCES:.cpp=.o)
NAME = ScavTrap
all: $(NAME)

$(NAME): $(OBJECTS)
	$(CPP) $(OBJECTS) -o $(NAME)

%.o: %.cpp ClapTrap.hpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean