# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
protected:
    std::string Name;
    int         HitPoint;
    int         EnergyPoints;
    int         AttackDamage;
public:
    ClapTrap(std::string Name);
    ClapTrap(ClapTrap &obj);
    ClapTrap();
    ~ClapTrap();
    ClapTrap &operator=(ClapTrap& obj);
    void        attack(const std::string& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
};

# endif