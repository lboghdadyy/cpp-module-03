# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string Name);
        FragTrap(FragTrap &obj);
        FragTrap();
        ~FragTrap();
        FragTrap &operator=(FragTrap& obj);
        void highFivesGuys(void);
};
