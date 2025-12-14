# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap &obj);
        ScavTrap();
        ~ScavTrap();
        ScavTrap &operator=(ScavTrap& obj);
        void    attack(const std::string& target);
        void    guardGate(void);
};
