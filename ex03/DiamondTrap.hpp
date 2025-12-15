# ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public  ScavTrap, public FragTrap
{
    private :
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(const std::string nom);
        DiamondTrap(DiamondTrap &obj);
        ~DiamondTrap();
        DiamondTrap& operator=(const DiamondTrap &obj);
        std::string GetName();
        void        whoAmI(void);
        void        attack(const std::string &target);
};

# endif