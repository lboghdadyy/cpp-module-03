# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string Name);
        FragTrap(const FragTrap &obj);
        FragTrap();
        ~FragTrap();
        FragTrap &operator=(const FragTrap& obj);
        void highFivesGuys(void);
};
