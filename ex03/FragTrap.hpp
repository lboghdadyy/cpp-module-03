# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(std::string Name);
        FragTrap(FragTrap &obj);
        FragTrap();
        ~FragTrap();
        FragTrap &operator=(FragTrap& obj);
        void highFivesGuys(void);
};

# endif