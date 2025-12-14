# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
protected:
    std::string     Name;
    unsigned int    HitPoint;
    unsigned int    EnergyPoints;
    unsigned int    AttackDamage;
public:
    ClapTrap(std::string Name);
    ClapTrap(const ClapTrap &obj);
    ClapTrap();
    ~ClapTrap();
    ClapTrap &operator=(ClapTrap& obj);
    void        attack(const std::string& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
};

# endif